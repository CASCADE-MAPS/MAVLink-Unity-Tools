using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class DatabaseManager : MonoBehaviour
{
    /* The drone database stores information about any drones in the scene.
     * All drones are stored in a dictionary which is indexed by their system ID
     * This means that any new information pertaining to an existing sysID will be
     * updated for the drone, rather than a new drone being created.
     */

    // The actual database holding all drones with System ID as keys
    public Dictionary<int, DroneInfo> Drones = new Dictionary<int, DroneInfo>();

    // Connection info used to display the system IDs for all drones in the database
    string connectionString;
    public int[] connectedIds;
    public TMP_Text connectionsText;

    // Unity doesn't allow us to access Time unless in the main Update/FixedUpdate threads
    // So we record the time in there and refer to it in all our functions for timestamping.
    float currentTime;

    private void Update()
    {
        currentTime = Time.realtimeSinceStartup;
    }

    public void UpdateDrone(DroneInfo newDroneInfo)
    {
        // If the drone already has information stored
        if (Drones.ContainsKey(newDroneInfo.systemId))
        {
            // It might be unnecessary to do this check in Unity - though it makes sense when
            // messages are coming in over a network and could arrive out of order.
            // On the Unity side, we're timestamping the message with its time of arrival relative
            // to the simulation start time. This is done to be consistent between different devices
            // as some may also timestamp their messages with time since they turned on.
            // Really, it would be best to preserve their incoming timestamp and include an arrival timestamp as well
            // so we know both: the most up to date messages and how long since the last message arrived.
            if (newDroneInfo.timeStamp > Drones[newDroneInfo.systemId].timeStamp)
            {
                // Update the drone info if the new info is more recent
                Drones[newDroneInfo.systemId] = newDroneInfo;
            }
        }
        else
        {
            // Otherwise, add the new drone to the dictionary
            AddDrone(newDroneInfo);
        }
    }

    public void UpdateDronePosition(DroneInfo newDroneInfo)
    {
        // If the drone already has information stored
        if (Drones.ContainsKey(newDroneInfo.systemId))
        {
            if (newDroneInfo.timeStamp > Drones[newDroneInfo.systemId].timeStamp)
            {
                // Update the drone info if the new info is more recent
                Drones[newDroneInfo.systemId].CopyPosition(newDroneInfo);
            }
        }
        else
        {
            // Otherwise, add the new drone to the dictionary
            AddDrone(newDroneInfo);
        }
    }

    public void UpdateDroneBattery(int sysID, float battery)
    {
        if (Drones.ContainsKey(sysID))
        {
            Drones[sysID].battery = battery;
        }
        else
        {
            // Create and add a new drone
            DroneInfo droneInfo = new DroneInfo();
            droneInfo.battery = battery;
            AddDrone(droneInfo);
        }
    }

    private void AddDrone(DroneInfo newDroneInfo)
    {
        Drones[newDroneInfo.systemId] = newDroneInfo;
        UpdateConnectionInfo();
    }

    /// <summary>
    /// Update the text which shows which IDs are connected.
    /// </summary>
    private void UpdateConnectionInfo()
    {
        // Get all the system IDs from the drones dictionary
        connectedIds = Drones.Keys.ToArray();

        // Create a string with each line representing one of the connected IDs
        connectionString = "";
        for (int i = 0; i < connectedIds.Length; i++)
        {
            connectionString += connectedIds[i].ToString() + '\n';
        }

        // Update the text which displays all the connection IDs
        connectionsText.text = connectionString;
    }
}
