using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

public class UdpSender : MonoBehaviour
{
    Thread mThread;
    public string connectionIP = "127.0.0.1";
    public bool running;

    public int sendPort = 7878;
    public int byteLength;

    UdpClient sender;

    byte[] sendBytes;
    int msgCounter;

    private void OnDisable()
    {
        running = false;
        sender.Close();
    }


    private void Start()
    {
        // Receive on a separate thread so Unity doesn't freeze waiting for data
        ThreadStart ts = new ThreadStart(StartSender);
        mThread = new Thread(ts);
        mThread.Start();
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


    void SendData()
    {
        sendBytes = Encoding.UTF8.GetBytes(msgCounter.ToString());
        sender.Send(sendBytes, sendBytes.Length, connectionIP, sendPort);
        msgCounter++;
        Thread.Sleep(100);
    }
}
