################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/CDDSManager.cpp \
../Source/CSensorPublisher.cpp \
../Source/main.cpp 

OBJS += \
./Source/CDDSManager.o \
./Source/CSensorPublisher.o \
./Source/main.o 

CPP_DEPS += \
./Source/CDDSManager.d \
./Source/CSensorPublisher.d \
./Source/main.d 


# Each subdirectory must supply rules for building sources it contributes
Source/%.o: ../Source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I../ThirdParty/easyloggingpp/include -I/home/spiderkeys/RTI/ndds.5.1.0/include/ -I/home/spiderkeys/RTI/ndds.5.1.0/include/ndds/ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -DRTI_UNIX -DRTI_LINUX -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


