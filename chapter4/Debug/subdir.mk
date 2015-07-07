################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../chap4-4-1-1.cpp \
../chap4-4-1-1b.cpp \
../main.cpp \
../pound_to_dollars.cpp \
../yen_to_euros.cpp 

OBJS += \
./chap4-4-1-1.o \
./chap4-4-1-1b.o \
./main.o \
./pound_to_dollars.o \
./yen_to_euros.o 

CPP_DEPS += \
./chap4-4-1-1.d \
./chap4-4-1-1b.d \
./main.d \
./pound_to_dollars.d \
./yen_to_euros.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


