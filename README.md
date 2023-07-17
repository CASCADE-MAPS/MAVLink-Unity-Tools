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
