################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/HandleLed.c \
../Core/Src/button.c \
../Core/Src/countdown.c \
../Core/Src/display7SEG.c \
../Core/Src/fsm.c \
../Core/Src/global.c \
../Core/Src/main.c \
../Core/Src/sorfware_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c 

OBJS += \
./Core/Src/HandleLed.o \
./Core/Src/button.o \
./Core/Src/countdown.o \
./Core/Src/display7SEG.o \
./Core/Src/fsm.o \
./Core/Src/global.o \
./Core/Src/main.o \
./Core/Src/sorfware_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o 

C_DEPS += \
./Core/Src/HandleLed.d \
./Core/Src/button.d \
./Core/Src/countdown.d \
./Core/Src/display7SEG.d \
./Core/Src/fsm.d \
./Core/Src/global.d \
./Core/Src/main.d \
./Core/Src/sorfware_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/HandleLed.cyclo ./Core/Src/HandleLed.d ./Core/Src/HandleLed.o ./Core/Src/HandleLed.su ./Core/Src/button.cyclo ./Core/Src/button.d ./Core/Src/button.o ./Core/Src/button.su ./Core/Src/countdown.cyclo ./Core/Src/countdown.d ./Core/Src/countdown.o ./Core/Src/countdown.su ./Core/Src/display7SEG.cyclo ./Core/Src/display7SEG.d ./Core/Src/display7SEG.o ./Core/Src/display7SEG.su ./Core/Src/fsm.cyclo ./Core/Src/fsm.d ./Core/Src/fsm.o ./Core/Src/fsm.su ./Core/Src/global.cyclo ./Core/Src/global.d ./Core/Src/global.o ./Core/Src/global.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/sorfware_timer.cyclo ./Core/Src/sorfware_timer.d ./Core/Src/sorfware_timer.o ./Core/Src/sorfware_timer.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su

.PHONY: clean-Core-2f-Src

