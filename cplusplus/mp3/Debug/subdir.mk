################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../book.cpp \
../main.cpp \
../publication.cpp \
../sales.cpp \
../tape.cpp 

OBJS += \
./book.o \
./main.o \
./publication.o \
./sales.o \
./tape.o 

CPP_DEPS += \
./book.d \
./main.d \
./publication.d \
./sales.d \
./tape.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


