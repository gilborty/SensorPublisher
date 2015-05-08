# SensorPublisher
Project which is part of a series of DDS example applications. Publishes distance and temperature sensor updates.

This project uses RTI's XML app creation methodology. Their guide for this is pretty good, but I wanted to spin up a complete project that shows off the flexibility and ease of working with that system. 

Areas of interest:

* SharedDDS Submodule - The AppLibrary.xml file
* CSensorPublisher.h/cpp - The use of an unordered map to register/handle triggered DDS status conditions.
* CDDSManager.h/cpp - A simple manager class for entity construction via XML and easy access to DDS entities. 

# Todo List
- [ ] Revamp to build using a makefile, rather than an Eclipse project
- [ ] Complete the Controller and Console applications described in the AppLibrary.xml

More to come!

