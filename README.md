# MAVLink Unity Tools
Visualise telemetry from drones in Mixed Reality using Unity and MAVLink.

The tools in this repository will help users to convert MAVLink communications into visual feedback on drones in virtual scenes thanks to Unity.
These scenes can be rendered on desktop/mobile applications or in Virtual or Augmented Reality applications.
Communication is currently supported via Serial and UDP. TCP will be included in a future update.

## Overview
The following tools are provided:
- Database Manager, manages the system IDs of incoming communications and maintains a dictionary of all drones communicating with the application, including timestamped messages to manage timeouts.
- Drone Manager, manages the drone models which are spawned and moved around the scene depending on position data
- Gps Conversion Tools, used to convert between World Geodetic System 84 and local Cartesian coordinate system in Unity
- Serial Client, handles the communcation between Unity and a device connected via a com port
- UDP Client, handles the communication between Unity and other local/network devices via a specified port

## Getting Started
The Example Unity Project demonstrates the use of these tools for a Hololens application which renders model drones according to received GPS information via UDP MAVLink messages.
To start a new project, add the Tool Scripts to a new game object in a Unity scene:

![Scene Manager Image]([http://url/to/img.png](https://github.com/CASCADE-MAPS/MAVLink-Unity-Tools/blob/main/Images/scene%20manager.png)https://github.com/CASCADE-MAPS/MAVLink-Unity-Tools/blob/main/Images/scene%20manager.png)

You will also need to create a drone prefab for the drone manager to use for visualisation purposes. This can be as complex as a model drone with an information panel attached or as simple as a cube. The prefab will be positioned in the scene according to the lat lon alt coordinates that are provided for that drone's system ID.

Ensure that your firewall is not blocking the Unity Editor during testing, sometimes special rules are added to the firewall for each installed version of the editor so make sure to check them all.

