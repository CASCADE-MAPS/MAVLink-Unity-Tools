using System;
using UnityEngine;

/// <summary>
/// The functions required to convert between GPS and North East Down frames.
/// </summary>
public static class GpsConversions
{
    const double earthRadius = 6378137.0;
    const double e = 0.08181919;
    const double deg2rad = Math.PI / 180.0;

    public static Vector3 origin;
    public static double ref_lat;
    public static double ref_lon;
    public static double ref_alt;

    static double refLatRad;
    static double refLonRad;

    static double sinRefLat;
    static double cosRefLat;
    static double sinRefLon;
    static double cosRefLon;

    static double Ne_ref;
    static double ecef_x_ref;
    static double ecef_y_ref;
    static double ecef_z_ref;

    public static Vector3 InitialiseOrigin(double lat, double lon, double alt)
    {
        origin = Vector3.zero;
        origin = UnityPositionFromLatLonAlt(lat, lon, alt);

        ref_lat = lat;
        ref_lon = lon;
        ref_alt = alt;


        refLatRad = ref_lat * Math.PI / 180.0;
        refLonRad = ref_lon * Math.PI / 180.0;

        sinRefLat = Math.Sin(refLatRad);
        cosRefLat = Math.Cos(refLatRad);
        sinRefLon = Math.Sin(refLonRad);
        cosRefLon = Math.Cos(refLonRad);

        Ne_ref = earthRadius / (Math.Sqrt(1.0 - (e * e * sinRefLat * sinRefLat)));
        ecef_x_ref = (Ne_ref + ref_alt) * cosRefLat * cosRefLon;
        ecef_y_ref = (Ne_ref + ref_alt) * cosRefLat * sinRefLon;
        ecef_z_ref = ((Ne_ref * (1.0 - e * e)) + ref_alt) * sinRefLat;

        return origin;
    }

    public static Vector3 UnityPositionFromLatLonAlt(double lat, double lon, double alt)
    {
        double Ne = earthRadius / (Math.Sqrt(1.0 - (e * e * Math.Sin(deg2rad * lat) * Math.Sin(deg2rad * lat))));
        double ecef_x = (Ne + alt) * Math.Cos(deg2rad * lat) * Math.Cos(deg2rad * lon);
        double ecef_y = (Ne + alt) * Math.Cos(deg2rad * lat) * Math.Sin(deg2rad * lon);
        double ecef_z = ((Ne * (1.0 - e * e)) + alt) * Math.Sin(deg2rad * lat);

        double rel_x = ecef_x - ecef_x_ref;
        double rel_y = ecef_y - ecef_y_ref;
        double rel_z = ecef_z - ecef_z_ref;

        double ned_x = rel_x * (-1.0 * sinRefLat * cosRefLon) + rel_y * (-1.0 * sinRefLat * sinRefLon) + rel_z * cosRefLat;
        double ned_y = rel_x * (-1.0 * sinRefLon) + rel_y * (cosRefLon) + rel_z * (0.0);
        double ned_z = rel_x * (-1.0 * cosRefLat * cosRefLon) + rel_y * (-1.0 * cosRefLat * sinRefLon) + rel_z * (-1.0 * sinRefLat);

        return new Vector3((float)ned_y, (float)-ned_z, (float)ned_x);
    }

    public static double[] LatLonAltFromUnityPosition(Vector3 position)
    {
        double ned_x = position.z;
        double ned_y = position.x;
        double ned_z = -position.y;

        double rel_x = -ned_y * sinRefLon - ned_z * cosRefLat * cosRefLon - ned_x * cosRefLon * sinRefLat;
        double rel_y = ned_y * cosRefLon - ned_z * cosRefLat * sinRefLon - ned_x * sinRefLat * sinRefLon;
        double rel_z = ned_x * cosRefLat - ned_z * sinRefLat;

        double ecef_x = rel_x + ecef_x_ref;
        double ecef_y = rel_y + ecef_y_ref;
        double ecef_z = rel_z + ecef_z_ref;


        double lon = Math.Atan2(ecef_y, ecef_x);
        double latEstimate = Math.Atan2(ecef_z, Math.Sqrt(ecef_x*ecef_x + ecef_y*ecef_y));
        
        // Mid point rule to get a better estimate, 3 iterations seems to be enough to get full precision accuracy
        for (int i = 0; i < 3; i++)
        {
            double Ne_estimate = earthRadius / (Math.Sqrt(1.0 - (e * e * Math.Sin(latEstimate) * Math.Sin(latEstimate))));
            latEstimate = Math.Acos(ecef_y / ((Math.Sin(lon) * (Ne_estimate + ref_alt))));
        }

        // Lat lon altitude
        double[] LLA = new double[3];

        LLA[0] = latEstimate;
        LLA[1] = lon;
        LLA[2] = position.y - ref_alt;

        // Convert lat and lon to degrees
        LLA[0] *= 180.0 / Math.PI;
        LLA[1] *= 180.0 / Math.PI;

        return LLA;
    }
}
