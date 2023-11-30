################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/USART.c \
../Core/Src/buzzer_processing.c \
../Core/Src/displayLED.c \
../Core/Src/fsm_automatic.c \
../Core/Src/fsm_main.c \
../Core/Src/fsm_manual.c \
../Core/Src/fsm_pedestrian.c \
../Core/Src/fsm_turning.c \
../Core/Src/global.c \
../Core/Src/input_reading.c \
../Core/Src/main.c \
../Core/Src/sched.c \
../Core/Src/sched_llist.c \
../Core/Src/software_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/timer_llist.c 

OBJS += \
./Core/Src/USART.o \
./Core/Src/buzzer_processing.o \
./Core/Src/displayLED.o \
./Core/Src/fsm_automatic.o \
./Core/Src/fsm_main.o \
./Core/Src/fsm_manual.o \
./Core/Src/fsm_pedestrian.o \
./Core/Src/fsm_turning.o \
./Core/Src/global.o \
./Core/Src/input_reading.o \
./Core/Src/main.o \
./Core/Src/sched.o \
./Core/Src/sched_llist.o \
./Core/Src/software_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/timer_llist.o 

C_DEPS += \
./Core/Src/USART.d \
./Core/Src/buzzer_processing.d \
./Core/Src/displayLED.d \
./Core/Src/fsm_automatic.d \
./Core/Src/fsm_main.d \
./Core/Src/fsm_manual.d \
./Core/Src/fsm_pedestrian.d \
./Core/Src/fsm_turning.d \
./Core/Src/global.d \
./Core/Src/input_reading.d \
./Core/Src/main.d \
./Core/Src/sched.d \
./Core/Src/sched_llist.d \
./Core/Src/software_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/timer_llist.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/USART.cyclo ./Core/Src/USART.d ./Core/Src/USART.o ./Core/Src/USART.su ./Core/Src/buzzer_processing.cyclo ./Core/Src/buzzer_processing.d ./Core/Src/buzzer_processing.o ./Core/Src/buzzer_processing.su ./Core/Src/displayLED.cyclo ./Core/Src/displayLED.d ./Core/Src/displayLED.o ./Core/Src/displayLED.su ./Core/Src/fsm_automatic.cyclo ./Core/Src/fsm_automatic.d ./Core/Src/fsm_automatic.o ./Core/Src/fsm_automatic.su ./Core/Src/fsm_main.cyclo ./Core/Src/fsm_main.d ./Core/Src/fsm_main.o ./Core/Src/fsm_main.su ./Core/Src/fsm_manual.cyclo ./Core/Src/fsm_manual.d ./Core/Src/fsm_manual.o ./Core/Src/fsm_manual.su ./Core/Src/fsm_pedestrian.cyclo ./Core/Src/fsm_pedestrian.d ./Core/Src/fsm_pedestrian.o ./Core/Src/fsm_pedestrian.su ./Core/Src/fsm_turning.cyclo ./Core/Src/fsm_turning.d ./Core/Src/fsm_turning.o ./Core/Src/fsm_turning.su ./Core/Src/global.cyclo ./Core/Src/global.d ./Core/Src/global.o ./Core/Src/global.su ./Core/Src/input_reading.cyclo ./Core/Src/input_reading.d ./Core/Src/input_reading.o ./Core/Src/input_reading.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/sched.cyclo ./Core/Src/sched.d ./Core/Src/sched.o ./Core/Src/sched.su ./Core/Src/sched_llist.cyclo ./Core/Src/sched_llist.d ./Core/Src/sched_llist.o ./Core/Src/sched_llist.su ./Core/Src/software_timer.cyclo ./Core/Src/software_timer.d ./Core/Src/software_timer.o ./Core/Src/software_timer.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/timer_llist.cyclo ./Core/Src/timer_llist.d ./Core/Src/timer_llist.o ./Core/Src/timer_llist.su

.PHONY: clean-Core-2f-Src

