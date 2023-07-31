using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class HoloDebugLogger : MonoBehaviour
{
    public TMP_Text debugText;

    private static HoloDebugLogger instance;
    public static HoloDebugLogger Instance { get { return instance; } }

    private void Awake()
    {
        instance = this;
    }

    public readonly static Queue<Action> ExecuteOnMainThread = new Queue<Action>();

    public void LogMessage(string message)
    {
        ExecuteOnMainThread.Enqueue(() =>
        {
            debugText.text = debugText.text + message + "\n";
        });
        
    }

    void Update()
    {
        while (ExecuteOnMainThread.Count > 0)
        {
            ExecuteOnMainThread.Dequeue().Invoke();
        }
    }
}
