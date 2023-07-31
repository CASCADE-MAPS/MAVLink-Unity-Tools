using System.Net.Sockets;
using System.Threading;
using UnityEngine;
using TMPro;
using System.Net;

public class SetTargetPositionBroadcaster : MonoBehaviour
{
    public TMP_Text portText;
    public TMP_Text compText;
    public TMP_Text sysText;
    private int sendPort = 10105;
    public Transform waypoint;
    public float lat, lon, alt;
    public bool running;
    public float sendHz = 2;
    public float speedSendHz = 2;

    public float groundSpeed = 2;

    // Ensure altitude can only be between 30 and 200 m absolute
    // Llanbedr airfield ground level is ~ 10 m altitude
    public float minAltitude = 30;
    public float maxAltitude = 100;

    // These lat lon coords draw a box to the west of the hangar at Llanbedr airfield
    // This is a constrained area for the target
    public float maxLat = 52.818000f;
    public float minLat = 52.816900f;

    public float maxLon = -4.126936f;
    public float minLon = -4.128900f;

    public Vector3 position;

    UdpClient sender;
    Thread mainSendThread;
    Thread speedSendThread;

    MAVLink.MavlinkParse mavlink = new MAVLink.MavlinkParse();

    // Stores the set position target message
    MAVLink.mavlink_set_position_target_global_int_t setPositionTargetMessage;

    /// <summary>
    /// Do we have a new packet ready to send?
    /// </summary>
    bool havePacketToSend = false;
    byte[] sendBytes = null;
    byte[] setSpeedPacket = null;
    IPEndPoint endPoint;

    private void OnDisable()
    {
        running = false;
        sender.Close();
    }


    private void Start()
    {
        // Receive on a separate thread so Unity doesn't freeze waiting for data
        ThreadStart ts = new ThreadStart(StartSender);
        mainSendThread = new Thread(ts);
        mainSendThread.Start();


        ThreadStart ts2 = new ThreadStart(SpamSpeedSet);
        speedSendThread = new Thread(ts2);
        speedSendThread.Start();
    }

    void StartSender()
    {
        sender = new UdpClient();

        running = true;
        while (running)
        {
            SendData();
        }
        sender.Close();
    }

    private void SpamSpeedSet()
    {
        Debug.Log("Sending speed commands");
        for (int i = 0; i < 20; i++)
        {
            // Broadcast message to all IPs on the network and send to specified port
            // Note that the sysID and compID will prevent the wrong device from using the messages
            endPoint = new IPEndPoint(IPAddress.Broadcast, sendPort);

            // Send the change speed command
            setSpeedPacket = SetSpeedPacket();
            sender.Send(setSpeedPacket, setSpeedPacket.Length, endPoint);

            // Sleep the send thread for the period required
            Thread.Sleep(Mathf.CeilToInt(1000 / speedSendHz));
        }
        Debug.Log("Finished sending speed commands");
    }

    byte[] SetSpeedPacket()
    {
        MAVLink.mavlink_command_long_t cmdLong = new MAVLink.mavlink_command_long_t()
        {
            // Do change speed
            command = 178,

            // Speed type (0=Airspeed, 1=Ground Speed, 2=Climb Speed, 3=Descent Speed)
            param1 = 1,

            // Speed (-1 indicates no change, -2 indicates return to default vehicle speed)
            param2 = groundSpeed,

            // 	Throttle (-1 indicates no change, -2 indicates return to default vehicle throttle value)
            param3 = 0,

            // Target system and component
            target_component = (byte)int.Parse(compText.text),
            target_system = (byte)int.Parse(compText.text)
        };

        return mavlink.GenerateMAVLinkPacket20(MAVLink.MAVLINK_MSG_ID.COMMAND_LONG, cmdLong);
    }

    void SendData()
    {
        if (havePacketToSend)
        {
            // Broadcast message to all IPs on the network and send to specified port
            endPoint = new IPEndPoint(IPAddress.Broadcast, sendPort);

            // Send the change speed command - we're now just spamming this when the app starts
            // so we're not sending loads of mavlink messages all the time
            //setSpeedPacket = SetSpeedPacket();
            //sender.Send(setSpeedPacket, setSpeedPacket.Length, endPoint);

            // Pack up and send the waypoint packet
            sendBytes = mavlink.GenerateMAVLinkPacket20(MAVLink.MAVLINK_MSG_ID.SET_POSITION_TARGET_GLOBAL_INT, setPositionTargetMessage);
            sender.Send(sendBytes, sendBytes.Length, endPoint);

            // Set this to false so we don't repeatedly send the same message
            havePacketToSend = false;

            // Sleep the send thread for the period required
            Thread.Sleep(Mathf.CeilToInt(1000 / sendHz));
        }
    }

    // Update is called once per frame
    void Update()
    {
        position = waypoint.localPosition;

        // Not mapping anymore as the drone location doesn't match with the target!

        // Map the position so that 30 vertical gives 30 and 300 vertical gives 100
        // so we have more room to move the target for setting altitude
        //position.y = (position.y / 3f) + 20f;

        // Convert the waypoint position to lat lon altitude
        double[] LLA = GpsConversions.LatLonAltFromUnityPosition(position);
        lat = Mathf.Clamp((float)LLA[0], minLat, maxLat);
        lon = Mathf.Clamp((float)LLA[1], minLon, maxLon);
        alt = Mathf.Clamp((float)LLA[2], minAltitude, maxAltitude);

        // Obtain the send port from the text field
        sendPort = int.Parse(portText.text);

        // Pack up the mavlink message
        setPositionTargetMessage = new MAVLink.mavlink_set_position_target_global_int_t()
        {
            coordinate_frame = (byte)MAVLink.MAV_FRAME.GLOBAL_INT,
            type_mask = 3064,
            lat_int = (int)(lat * 1e7f),
            lon_int = (int)(lon * 1e7f),
            alt = alt,
            vx = 0,
            vy = 0,
            vz = 0,
            afx = 0,
            afy = 0,
            afz = 0,
            yaw = 0,
            yaw_rate = 0,
            target_component = (byte)int.Parse(compText.text),
            target_system = (byte)int.Parse(compText.text)
        };

        // Let the other thread know we are ready to send
        havePacketToSend = true;
    }
}