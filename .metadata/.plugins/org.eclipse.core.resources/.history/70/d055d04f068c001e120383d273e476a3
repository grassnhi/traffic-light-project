/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "usart.h"
#include "global.h"
#include "displayLED.h"
#include "fsm_turning.h"
#include "input_reading.h"
#include "fsm_automatic.h"
#include "fsm_pedestrian.h"
#include "software_timer.h"
#include "buzzer_processing.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BT3_Pin GPIO_PIN_0
#define BT3_GPIO_Port GPIOA
#define BT0_Pin GPIO_PIN_1
#define BT0_GPIO_Port GPIOA
#define BT1_Pin GPIO_PIN_4
#define BT1_GPIO_Port GPIOA
#define BUZZ_Pin GPIO_PIN_6
#define BUZZ_GPIO_Port GPIOA
#define BT2_Pin GPIO_PIN_0
#define BT2_GPIO_Port GPIOB
#define PLIGHT1_Pin GPIO_PIN_10
#define PLIGHT1_GPIO_Port GPIOB
#define PLIGHT2_Pin GPIO_PIN_8
#define PLIGHT2_GPIO_Port GPIOA
#define TLIGHT11_Pin GPIO_PIN_10
#define TLIGHT11_GPIO_Port GPIOA
#define TLIGHT12_Pin GPIO_PIN_3
#define TLIGHT12_GPIO_Port GPIOB
#define TLIGHT22_Pin GPIO_PIN_4
#define TLIGHT22_GPIO_Port GPIOB
#define TLIGHT21_Pin GPIO_PIN_5
#define TLIGHT21_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
extern UART_HandleTypeDef huart2;
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
