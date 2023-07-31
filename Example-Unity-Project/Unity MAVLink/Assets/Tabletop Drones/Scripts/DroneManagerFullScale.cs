using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using TMPro;

public class DroneManagerFullScale : MonoBehaviour
{
    // Scale of the drone in world space
    public float droneScale = 1f;

    // Width of trail in world space
    public float trailWidth = 0.05f;

    // Remove drone from scene after timeout
    public float timeoutSeconds = 300f;

    // Warning for drone with old data
    public static float staleDataSeconds = 60f;

    // Object to spawn in the scene which represents a drone
    public GameObject dronePrefab;

    // Used for world scaling
    public Transform worldRoot;

    // Reference used to set the heading of the world
    public Transform world;
    public TMP_Text headingText;

    // GPS Origin
    public TMP_Text latText;
    public TMP_Text lonText;
    public TMP_Text altText;

    // Database for drone position information
    DatabaseManager Database;

    // These lists are updated in tandem and so should be in the same order at all times
    List<DroneTextDisplayer> spawnedDrones;
    List<int> spawnedDroneIds = new List<int>();

    // Start is called before the first frame update
    void Start()
    {
        Database = GetComponent<DatabaseManager>();
        spawnedDrones = new List<DroneTextDisplayer>();
        spawnedDroneIds = new List<int>();
        SetOrigin();
    }

    public void SetOrigin()
    {
        double originLat = double.Parse(latText.text);
        double originLon = double.Parse(lonText.text);
        double originAlt = double.Parse(altText.text);
        GpsConversions.InitialiseOrigin(originLat, originLon, originAlt);
    }

    public void SetHeading()
    {
        float heading = float.Parse(headingText.text);
        world.eulerAngles = new Vector3(0, -heading, 0);
    }

    void CheckForNewDrones()
    {
        int[] ids = Database.Drones.Keys.ToArray();
        for (int i = 0; i < ids.Length; i++)
        {
            if (spawnedDroneIds.Contains(ids[i]))
            {
                // We already have the id saved
                continue;
            }

            // If we reach this section then the id in the data base doesn't match a saved id
            // Check for timeout
            if (Database.Drones[ids[i]].timeStamp > Time.time - timeoutSeconds)
            {
                CreateDrone(ids[i]);
            }
        }
    }

    private void CreateDrone(int id)
    {
        // Spawn the drone
        DroneTextDisplayer drone = Instantiate(dronePrefab).GetComponent<DroneTextDisplayer>();
        drone.systemId = id;
        drone.droneInfo = Database.Drones[id];
        drone.transform.localScale = droneScale * Vector3.one;

        // World root is used for scaling down the size of the world
        if (worldRoot)
        {
            drone.transform.SetParent(worldRoot);
        }

        // Set the trail width
        TrailRenderer trail = drone.GetComponent<TrailRenderer>();
        if(trail != null)
        {
            trail.startWidth = trailWidth;
            trail.endWidth = trailWidth;
        }

        // Add the drone to the list
        spawnedDrones.Add(drone);
        spawnedDroneIds.Add(id);
    }

    Vector3 cameraPosition;

    void UpdateDrones()
    {
        cameraPosition = Camera.main.transform.position;

        for (int i = 0; i < spawnedDroneIds.Count; i++)
        {
            DroneInfo droneInfo = Database.Drones[spawnedDroneIds[i]];

            // Check for timeout
            if(droneInfo.timeStamp <= Time.time - timeoutSeconds)
            {
                // The drone info is older than our timeout
                // Delete the drone
                Debug.Log("Drone has timed out");
                RemoveDrone(i);
                continue;
            }

            // Update the drone position and info
            spawnedDrones[i].droneInfo = droneInfo;
            spawnedDrones[i].transform.localPosition = GpsConversions.UnityPositionFromLatLonAlt(droneInfo.lat, droneInfo.lon, droneInfo.alt);
            spawnedDrones[i].transform.localScale = Vector3.Distance(cameraPosition, spawnedDrones[i].transform.position) * droneScale * Vector3.one;
        }
    }

    private void RemoveDrone(int id)
    {
        // Get the drone from the list
        DroneTextDisplayer drone = spawnedDrones[id];
        
        // Remove the drone from the scene
        Destroy(drone.gameObject);

        // Remove the drone from both lists
        spawnedDrones.RemoveAt(id);
        spawnedDroneIds.RemoveAt(id);
    }

    // Update is called once per frame
    void Update()
    {
        CheckForNewDrones();
        UpdateDrones();
    }
}
