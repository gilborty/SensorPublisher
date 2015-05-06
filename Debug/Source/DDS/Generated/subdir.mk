################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CXX_SRCS += \
../Source/DDS/Generated/Sensors.cxx \
../Source/DDS/Generated/SensorsPlugin.cxx \
../Source/DDS/Generated/SensorsSupport.cxx 

OBJS += \
./Source/DDS/Generated/Sensors.o \
./Source/DDS/Generated/SensorsPlugin.o \
./Source/DDS/Generated/SensorsSupport.o 

CXX_DEPS += \
./Source/DDS/Generated/Sensors.d \
./Source/DDS/Generated/SensorsPlugin.d \
./Source/DDS/Generated/SensorsSupport.d 


# Each subdirectory must supply rules for building sources it contributes
Source/DDS/Generated/%.o: ../Source/DDS/Generated/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I../ThirdParty/easyloggingpp/include -I/home/spiderkeys/RTI/ndds.5.1.0/include/ -I/home/spiderkeys/RTI/ndds.5.1.0/include/ndds/ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -DRTI_UNIX -DRTI_LINUX -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


