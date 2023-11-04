/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/*
 * Button using for traffic light
 * A1 - button 1 (PA1)
 * A2 - button 2 (PA4)
 * A3 - button 3 (PB0)
 */
#define A1_Pin 			GPIO_PIN_1
#define A1_GPIO_Port 	GPIOA
#define A2_Pin 			GPIO_PIN_4
#define A2_GPIO_Port 	GPIOA
#define A3_Pin 			GPIO_PIN_0
#define A3_GPIO_Port 	GPIOB

/*
 * Pedestrian mode
 * A0 - button for pedestrian. (PA0)
 * D7 - pedestrian light - red. (PA8)
 * D8 - pedestrian light - green. (PB10)
 * D12 - Pedestrian Buzzer. (PA6)
 */
#define A0_Pin 			GPIO_PIN_0
#define A0_GPIO_Port 	GPIOA
#define D7_Pin 			GPIO_PIN_8
#define D7_GPIO_Port 	GPIOA
#define D8_Pin 			GPIO_PIN_10
#define D8_GPIO_Port 	GPIOB
#define D12_Pin 		GPIO_PIN_6
#define D12_GPIO_Port 	GPIOA

/*
 * Traffic light 1
 * D1 - RED. (PA9)
 * D2 - YELLOW. (PA10)
 * D3 - GREEN. (PA11)
 */
#define D1_Pin 			GPIO_PIN_9
#define D1_GPIO_Port 	GPIOA
#define D2_Pin 			GPIO_PIN_10
#define D2_GPIO_Port 	GPIOA
#define D3_Pin 			GPIO_PIN_11
#define D3_GPIO_Port 	GPIOA

/*
 * Traffic light 1
 * D4 - RED. (PA9)
 * D5 - YELLOW. (PA10)
 * D6 - GREEN. (PA11)
 */
#define D4_Pin 			GPIO_PIN_3
#define D4_GPIO_Port 	GPIOB
#define D5_Pin 			GPIO_PIN_4
#define D5_GPIO_Port 	GPIOB
#define D6_Pin 			GPIO_PIN_5
#define D6_GPIO_Port 	GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
