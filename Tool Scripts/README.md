# The tools used for MAVLink communication in Unity applications
This folder contains the C# scripts used to send and receive MAVLink messages in Unity.

MAVLink communication in Unity requires the MAVLink plugin, a .dll which is freely available from: https://www.nuget.org/packages/MAVLink#readme-body-tab

## Database Manager
The drone database stores information about any drones in the scene.
All drones are stored in a dictionary which is indexed by their system ID.
This means that any new information pertaining to an existing sysID will be updated for the drone, rather than a new drone being created.
Information in the database is stored using instances of the DroneInfo class.
This manager includes functions for updating all information for a given ID, updating position only information or updating battery only information.

## Drone Info
This class is used to store information about a drone that may be communicated to the application.
Currently this information is limited to:
- System ID
- Latitude
- Longitude
- Altitude
- Battery
- Time since last message
Future development may extend this class to hold more information.

## Drone Manager
While the Database Manager is responsible for the data about drones in the network, the Drone Manager is responsible for displaying that information in the application.
The Drone Manager spawns models into the scene for each drone stored in the database.
Drones are positioned in the scene according to their lat lon alt and can be coloured depending on the time since their last message.

## GPS Conversions
This class implements functions for converting between Geodetic coordinates and local Cartesian coordinates.
Note that the class also includes a function for setting the origin of the local Cartesian coordinates to a given lat lon alt position.

## UDP Receiver
This class is used to collect MAVLink messages on a given port via UDP.
Listening is performed on a separate thread so as not to hold up the Unity application.
The current implementation of this receiver handles both the message collection and parsing.
Messages are dealt with and the parsed information is passed on to the Database Manager.
