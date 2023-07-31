using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class DroneTextDisplayer : MonoBehaviour
{
    public int systemId;
    public DroneInfo droneInfo;

    public GameObject infoPanel;

    public TMP_Text latText;
    public TMP_Text lonText;
    public TMP_Text altText;
    public TMP_Text idText;
    public TMP_Text tslText;
    public TMP_Text batteryText;

    float timeSinceLastMessage;

    // Update is called once per frame
    void Update()
    {
        timeSinceLastMessage = Time.time - (float)droneInfo.timeStamp;
        UpdateInfoPanel();
    }

    void SetTextColour(Color colour)
    {
        latText.color = colour;
        lonText.color = colour;
        altText.color = colour;
        idText.color = colour;
        tslText.color = colour;
        batteryText.color = colour;
    }

    private void UpdateInfoPanel()
    {
        // Set the text colour to red if the data has gone stale
        if (timeSinceLastMessage > DroneManager.staleDataSeconds)
        {
            SetTextColour(Color.red);
        }
        else
        {
            SetTextColour(Color.white);
        }

        // Update the text info
        latText.text = droneInfo.lat.ToString();
        lonText.text = droneInfo.lon.ToString();
        altText.text = droneInfo.alt.ToString();
        idText.text = droneInfo.systemId.ToString();
        tslText.text = timeSinceLastMessage.ToString("F0");
        batteryText.text = droneInfo.battery.ToString("F1") + " V";
    }

    public void SetInfoPanelActive(bool isActive)
    {
        infoPanel.SetActive(isActive);
    }
}
