################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Inc/macro.s \
../Inc/stm32f10x.s 

OBJS += \
./Inc/macro.o \
./Inc/stm32f10x.o 

S_DEPS += \
./Inc/macro.d \
./Inc/stm32f10x.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/macro.o: ../Inc/macro.s Inc/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m3 -g3 -c -I"D:/4kurs/1 sem/PMS/1laba/Led_Assembler/Inc" -include"D:/4kurs/1 sem/PMS/1laba/Led_Assembler/Inc/stm32f10x.s" -x assembler-with-cpp -MMD -MP -MF"Inc/macro.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"
Inc/stm32f10x.o: ../Inc/stm32f10x.s Inc/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m3 -g3 -c -I"D:/4kurs/1 sem/PMS/1laba/Led_Assembler/Inc" -x assembler-with-cpp -MMD -MP -MF"Inc/stm32f10x.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

