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
#define Button1_Pin GPIO_PIN_13
#define Button1_GPIO_Port GPIOC
#define RED1_Pin GPIO_PIN_1
#define RED1_GPIO_Port GPIOA
#define YELLOW1_Pin GPIO_PIN_2
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_3
#define GREEN1_GPIO_Port GPIOA
#define RED2_Pin GPIO_PIN_4
#define RED2_GPIO_Port GPIOA
#define YELLOW2_Pin GPIO_PIN_5
#define YELLOW2_GPIO_Port GPIOA
#define GREEN2_Pin GPIO_PIN_6
#define GREEN2_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_7
#define EN1_GPIO_Port GPIOA
#define FS0_Pin GPIO_PIN_0
#define FS0_GPIO_Port GPIOB
#define FS1_Pin GPIO_PIN_1
#define FS1_GPIO_Port GPIOB
#define FS2_Pin GPIO_PIN_2
#define FS2_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_8
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_9
#define EN3_GPIO_Port GPIOA
#define EN4_Pin GPIO_PIN_10
#define EN4_GPIO_Port GPIOA
#define BTN2_Pin GPIO_PIN_11
#define BTN2_GPIO_Port GPIOA
#define BTN3_Pin GPIO_PIN_12
#define BTN3_GPIO_Port GPIOA
#define FS3_Pin GPIO_PIN_3
#define FS3_GPIO_Port GPIOB
#define FS4_Pin GPIO_PIN_4
#define FS4_GPIO_Port GPIOB
#define FS5_Pin GPIO_PIN_5
#define FS5_GPIO_Port GPIOB
#define FS6_Pin GPIO_PIN_6
#define FS6_GPIO_Port GPIOB
#define FS7_Pin GPIO_PIN_7
#define FS7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
