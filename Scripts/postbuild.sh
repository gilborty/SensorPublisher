 # Copy the config directory
 cp -r ../Config/ ./
 
# Copy DDS directories
mkdir ./DDS/
mkdir ./DDS/XML/
mkdir ./DDS/XML/Application/
mkdir ./DDS/XML/Qos/

cp ../SharedDDS/XML/Application/*.xml ./DDS/XML/Application/
cp ../SharedDDS/XML/Qos/*.xml ./DDS/XML/Qos/

# Copy License Key
cp ~/RTI/rti_license.dat ./