using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PositionManager : MonoBehaviour
{
    /* The Position Manager is responsible for the location transformations and
     * setting of the origin point in lat lon alt.
     */

    /// <summary>
    /// Used for world scaling and the origin reference position.
    /// </summary>
    public Transform worldRoot;

    // Reference used to set the heading of the world
    public Transform world;
    public TMP_Text headingText;

    // GPS Origin
    public TMP_Text latText;
    public TMP_Text lonText;
    public TMP_Text altText;

    private void Start()
    {
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
}
