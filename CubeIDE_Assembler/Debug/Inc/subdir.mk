################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Inc/stm32f10x.s 

OBJS += \
./Inc/stm32f10x.o 

S_DEPS += \
./Inc/stm32f10x.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o: ../Inc/%.s Inc/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m3 -g3 -DDEBUG -c -I"/Users/yaao20u291/STM32CubeIDE/workspace_1.13.1/CubeIDE_Assembler/Inc" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/stm32f10x.d ./Inc/stm32f10x.o

.PHONY: clean-Inc

