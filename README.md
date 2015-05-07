# SensorPublisher
Project which is part of a series of DDS example applications. Publishes distance and temperature sensor updates.

*Note: Still working on cleaning up the build system. Right now it is simply set up to build in Eclipse on my machine, with a number of hardcoded paths to libs and tools. Going to be converting it to a make project soonly. Until then, enjoy browsing the source and structure of the project.*

This project uses RTI's XML app creation methodology. Their guide for this is pretty good, but I wanted to spin up a complete project that shows off the flexibility and ease of working with that system. 

Areas of interest:

* SharedDDS Submodule - The AppLibrary.xml file
* CSensorPublisher.h/cpp - The use of an unordered map to register/handle triggered DDS status conditions.
* CDDSManager.h/cpp - A simple manager class for entity construction via XML and easy access to DDS entities. 

More to come!

