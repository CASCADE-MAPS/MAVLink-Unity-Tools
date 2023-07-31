/// <summary>
/// Used to store information about a drone, including a time stamp for when the info was last updated.
/// Time is relative to the time that the simulation started, not actual time.
/// </summary>
public class DroneInfo
{
    /// <summary>
    /// The unique ID of the drone
    /// </summary>
    public int systemId;

    /// <summary>
    /// Latitude of the drone (deg)
    /// </summary>
    public double lat;

    /// <summary>
    /// Longitude of the drone (deg)
    /// </summary>
    public double lon;

    /// <summary>
    /// Absolute altitude of the drone (m)
    /// </summary>
    public double alt;

    /// <summary>
    /// Battery voltage of the drone. -1 generally means no battery info has been received. (V)
    /// </summary>
    public double battery = -1;

    /// <summary>
    /// Time at which the drone's info was last updated. Defined relative to the start of the application. (s)
    /// </summary>
    public double timeStamp;

    /// <summary>
    /// Copies only the lat, lon, alt, and timestamp from the new drone info instance.
    /// </summary>
    /// <param name="newInfo">The drone info to copy data from</param>
    public void CopyPosition(DroneInfo newInfo)
    {
        lat = newInfo.lat;
        lon = newInfo.lon;
        alt = newInfo.alt;
        timeStamp = newInfo.timeStamp;
    }
};
