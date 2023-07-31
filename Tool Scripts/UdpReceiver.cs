using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using TMPro;
using System;


public class UdpReceiver : MonoBehaviour
{
    // The database class, used to store the messages and manage the drones in the scene
    public DatabaseManager database;

    // Using text inputs for the port number, will accept messages from any ip address
    public TMP_Text portText;
    public int port;

    // This IP address is used to open the port, we send a message to this IP to try and open
    // the port
    public string ip = "192.168.1.160";


    // UDP Client settings, need a timeout here because we're using Receive instead of Begin/End Receive
    UdpClient listener;
    byte[] receivedBytes;
    public int receiveTimeoutDurationMs = 2000;
    public IPEndPoint groupEP;

    // Thread
    Thread listenThread;
    public bool running;

    private void Start()
    {
        // Set the settings menu port text to match the port we start with
        portText.text = port.ToString();

        // Set up the connection details
        SetUpClient();

        // Start the listening thread
        StartListening();
    }

    void SetUpClient()
    {
        groupEP = new IPEndPoint(IPAddress.Any, port);
        listener = new UdpClient(port);
    }

    private void Update()
    {
        currentTime = Time.time;
    }

    // This function is called when the class is disabled or destroyed
    // Usually when the application is closed - just make sure to end the thread
    private void OnDisable()
    {
        running = false;
        listener.Close();

    }

    private int newPort;
    IPEndPoint RemoteIpEndPoint;
    byte[] data;
    public void StartListening()
    {
        // Get the port number from the input field in the settings menu
        newPort = int.Parse(portText.text);

        RemoteIpEndPoint = new IPEndPoint(IPAddress.Parse(ip).MapToIPv4(), port);
        data = Encoding.UTF8.GetBytes("hello");

        // If the thread is already running, stop listening first
        if (listenThread != null) { StopThread(); }

        // Receive on a separate thread so Unity doesn't freeze waiting for data
        ThreadStart threadStarter = new ThreadStart(StartReceiver);
        listenThread = new Thread(threadStarter);
        listenThread.Start();
    }




    private void StopThread()
    {
        // Break the listen loop
        running = false;

        // Wait for the thread to finish
        listenThread.Join();

        // The listener is closed at the end of the listen thread - a long timeout might stall this
    }

    // Thread version
    void StartReceiver()
    {
        // Need to make sure we're not trying to start listening on the same port
        // This might not be necessary, we can probably just make sure to have a
        // call to the stop listening function here instead
        if (newPort != port)
        {
            port = newPort;
            SetUpClient();
        }

        // Set a time out so we can exit the thread even if there is no data coming in
        // This is required as we're not using async receive, so listener.Receive() will block the
        // thread indefinitely until data is received.
        listener.Client.ReceiveTimeout = receiveTimeoutDurationMs;  // in miliseconds

        // Start the connection, running can be set to false elsewhere to terminate this thread
        running = true;
        while (running)
        {
            GetPacket();
        }

        // Close the listener when running is set to false
        listener.Close();
    }

    float currentTime;

    void GetPacket()
    {
        receivedBytes = null;

        // Need the try catch here to handle the timeout on Receive
        try
        {
            // Although this looks like we'll send data fast, the timeout on the client's listen
            // is what hangs this function. Meaning that we will actually only send this data as often
            // as we receive data. Really it should be a heartbeat or something sensible but for now
            // it'll do!
            listener.Send(data, data.Length, RemoteIpEndPoint);

            Debug.Log("Trying to get UDP");
            receivedBytes = listener.Receive(ref groupEP);

            if (receivedBytes != null)
            {
                // Parse the bytes into a mavlink message
                MAVLink.MAVLinkMessage mavMessage = new MAVLink.MAVLinkMessage(receivedBytes);

                // If we got a legitimate MAVLink message
                if (mavMessage != null)
                {
                    // I wish we could do a switch statement here, I'm not really sure how else to do this
                    // other than a load of if statements... Maybe we could create a HandleMessage function
                    // and just overload it with all the types we want to handle, then we pass the message and
                    // its type into the HandleMessage function.

                    // For now, if statements are fine.

                    // Handle the global position message type
                    if (mavMessage.data.GetType() == typeof(MAVLink.mavlink_global_position_int_t))
                    {
                        // Convert the data and update the drone info in the drone database
                        var gpsPacket = (MAVLink.mavlink_global_position_int_t)mavMessage.data;
                        DroneInfo droneInfo = new DroneInfo()
                        {
                            alt = ((double)gpsPacket.alt) / 1000.0,
                            lat = ((double)gpsPacket.lat) / 1e7,
                            lon = ((double)gpsPacket.lon) / 1e7,
                            battery = -1,
                            systemId = mavMessage.sysid,

                            // Trying to avoid confusion by using the time the message was received
                            // rather than the time it was stamped by the sender
                            timeStamp = currentTime
                        };

                        // We only update the position here so we don't overwrite the drone's battery
                        database.UpdateDronePosition(droneInfo);
                    }


                    // Use system status to get battery
                    else if (mavMessage.data.GetType() == typeof(MAVLink.mavlink_sys_status_t))
                    {
                        // Convert the data and update the drone info in the drone database
                        var sysStatusPacket = (MAVLink.mavlink_sys_status_t)mavMessage.data;
                        database.UpdateDroneBattery(mavMessage.sysid, sysStatusPacket.voltage_battery / 1000f);
                    }
                }
            }
        }
        catch (Exception e)
        {
            // Use either the Unity debug console or the one I added to the settings menu
            // to display exceptions. NOTE: they can be really long so more logic might be needed here
            // to filter out all the crap.
            Debug.Log(e.ToString());

            // Uncomment this for hololens debug logs. Make sure the debug text is set and enabled in the settings menu
            //HoloDebugLogger.Instance.LogMessage(e.ToString());
        }

        Thread.Sleep(1);
    }
}
