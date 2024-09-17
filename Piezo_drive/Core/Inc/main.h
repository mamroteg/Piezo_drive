/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f3xx_hal.h"

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

void HAL_HRTIM_MspPostInit(HRTIM_HandleTypeDef *hhrtim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Gate_HI1_Pin GPIO_PIN_13
#define Gate_HI1_GPIO_Port GPIOC
#define Gate_LI1_Pin GPIO_PIN_14
#define Gate_LI1_GPIO_Port GPIOC
#define Gate_HI2_Pin GPIO_PIN_15
#define Gate_HI2_GPIO_Port GPIOC
#define PF0_OSC_IN_Pin GPIO_PIN_0
#define PF0_OSC_IN_GPIO_Port GPIOF
#define PF1_OSC_OUT_Pin GPIO_PIN_1
#define PF1_OSC_OUT_GPIO_Port GPIOF
#define Forward_Pin GPIO_PIN_0
#define Forward_GPIO_Port GPIOA
#define Forward_EXTI_IRQn EXTI0_IRQn
#define Backward_Pin GPIO_PIN_1
#define Backward_GPIO_Port GPIOA
#define Backward_EXTI_IRQn EXTI1_IRQn
#define Gate_LI2_Pin GPIO_PIN_2
#define Gate_LI2_GPIO_Port GPIOA
#define Speed_Pin GPIO_PIN_3
#define Speed_GPIO_Port GPIOA
#define Speed_EXTI_IRQn EXTI3_IRQn
#define Gate_HI3_Pin GPIO_PIN_7
#define Gate_HI3_GPIO_Port GPIOA
#define BK_Sense_Pin GPIO_PIN_0
#define BK_Sense_GPIO_Port GPIOB
#define Gate_LI3_Pin GPIO_PIN_1
#define Gate_LI3_GPIO_Port GPIOB
#define LED_SPD1_Pin GPIO_PIN_2
#define LED_SPD1_GPIO_Port GPIOB
#define LED_SPD3_Pin GPIO_PIN_10
#define LED_SPD3_GPIO_Port GPIOB
#define LED_SPD2_Pin GPIO_PIN_11
#define LED_SPD2_GPIO_Port GPIOB
#define BK_Drive_Pin GPIO_PIN_12
#define BK_Drive_GPIO_Port GPIOB
#define LED_CH3_Pin GPIO_PIN_13
#define LED_CH3_GPIO_Port GPIOB
#define LED_CH2_Pin GPIO_PIN_14
#define LED_CH2_GPIO_Port GPIOB
#define LED_CH1_Pin GPIO_PIN_15
#define LED_CH1_GPIO_Port GPIOB
#define P1_Drive_Pin GPIO_PIN_8
#define P1_Drive_GPIO_Port GPIOA
#define N1_Drive_Pin GPIO_PIN_9
#define N1_Drive_GPIO_Port GPIOA
#define N2_Drive_Pin GPIO_PIN_10
#define N2_Drive_GPIO_Port GPIOA
#define P2_Drive_Pin GPIO_PIN_11
#define P2_Drive_GPIO_Port GPIOA
#define Channel_Select_Pin GPIO_PIN_12
#define Channel_Select_GPIO_Port GPIOA
#define Channel_Select_EXTI_IRQn EXTI15_10_IRQn
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define EndPoint3_2_Pin GPIO_PIN_15
#define EndPoint3_2_GPIO_Port GPIOA
#define EndPoint3_2_EXTI_IRQn EXTI15_10_IRQn
#define EndPoint3_1_Pin GPIO_PIN_5
#define EndPoint3_1_GPIO_Port GPIOB
#define EndPoint3_1_EXTI_IRQn EXTI9_5_IRQn
#define EndPoint2_2_Pin GPIO_PIN_6
#define EndPoint2_2_GPIO_Port GPIOB
#define EndPoint2_2_EXTI_IRQn EXTI9_5_IRQn
#define EndPoint2_1_Pin GPIO_PIN_7
#define EndPoint2_1_GPIO_Port GPIOB
#define EndPoint2_1_EXTI_IRQn EXTI9_5_IRQn
#define EndPoint1_2_Pin GPIO_PIN_8
#define EndPoint1_2_GPIO_Port GPIOB
#define EndPoint1_2_EXTI_IRQn EXTI9_5_IRQn
#define EndPoint1_1_Pin GPIO_PIN_9
#define EndPoint1_1_GPIO_Port GPIOB
#define EndPoint1_1_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
