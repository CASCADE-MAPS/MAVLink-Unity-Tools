using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class DroneManager : MonoBehaviour
{
    /* The drone manager is responsible for creating game objects which represent all of the drones
     * which are stored in the Database (DatabaseManager).
     */

    /// <summary>
    /// Scale of the drone in world space
    /// </summary>
    public float droneScale = 1f;

    /// <summary>
    /// Width of drone trails in world space
    /// </summary>
    public float trailWidth = 0.05f;

    /// <summary>
    /// Remove a drone from the scene if a message for that drone has not be received in > timeoutSeconds.
    /// </summary>
    public float timeoutSeconds = 300f;

    /// <summary>
    /// Display text for a drone will turn red if a message for that drone has not been received in > staleDataSeconds.
    /// </summary>
    public static float staleDataSeconds = 60f;

    /// <summary>
    /// Object to spawn in the scene to represent a drone
    /// </summary>
    public GameObject dronePrefab;

    // Database for drone position information
    public DatabaseManager Database;

    // Used to get the root transform frame for the world
    public PositionManager positionManager;

    // These lists are updated in tandem and so should be in the same order at all times
    List<DroneTextDisplayer> spawnedDrones;
    List<int> spawnedDroneIds = new List<int>();

    // Start is called before the first frame update
    void Start()
    {
        spawnedDrones = new List<DroneTextDisplayer>();
        spawnedDroneIds = new List<int>();
    }

    // Update is called once per frame
    void Update()
    {
        CheckForNewDrones();
        UpdateDrones();
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
        if (positionManager.worldRoot)
        {
            drone.transform.SetParent(positionManager.worldRoot);
        }

        // Set the trail width
        TrailRenderer trail = drone.GetComponent<TrailRenderer>();
        if (trail != null)
        {
            trail.startWidth = trailWidth;
            trail.endWidth = trailWidth;
        }

        // Add the drone to the list
        spawnedDrones.Add(drone);
        spawnedDroneIds.Add(id);
    }

    void UpdateDrones()
    {
        for (int i = 0; i < spawnedDroneIds.Count; i++)
        {
            DroneInfo droneInfo = Database.Drones[spawnedDroneIds[i]];

            // Check for timeout
            if (droneInfo.timeStamp <= Time.time - timeoutSeconds)
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
}