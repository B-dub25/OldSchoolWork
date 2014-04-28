################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Triangle.cpp \
../diamond.cpp \
../driver.cpp \
../rectangle.cpp 

OBJS += \
./Triangle.o \
./diamond.o \
./driver.o \
./rectangle.o 

CPP_DEPS += \
./Triangle.d \
./diamond.d \
./driver.d \
./rectangle.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


