#pragma once

#include "../inc/stm32/f3/target.h"
#include <inttypes.h>

#define LED_GPIO_RCC RCC_GPIOA
#define LED_GPIO_PORT GPIOA
#define LED_GPIO_PIN GPIO5

#define DBG0_GPIO_RCC RCC_GPIOB
#define DBG0_GPIO_PORT GPIOB
#define DBG0_GPIO_PIN GPIO5

#define DBG1_GPIO_RCC RCC_GPIOB
#define DBG1_GPIO_PORT GPIOB
#define DBG1_GPIO_PIN GPIO6

#define DBG2_GPIO_RCC RCC_GPIOB
#define DBG2_GPIO_PORT GPIOB
#define DBG2_GPIO_PIN GPIO7

#define CONSOLE_USART USART2
#define CONSOLE_USART_RCC RCC_USART2
#define CONSOLE_TX_GPIO_AF GPIO_AF7
#define CONSOLE_TX_GPIO_RCC RCC_GPIOA
#define CONSOLE_TX_GPIO_PORT GPIOA
#define CONSOLE_TX_GPIO_PIN GPIO2
#define CONSOLE_TX_DMA_RCC RCC_DMA1
#define CONSOLE_TX_DMA DMA1
#define CONSOLE_TX_DMA_CHANNEL DMA_CHANNEL7
#define CONSOLE_TX_DMA_IRQ NVIC_DMA1_CHANNEL7_IRQ

#define PWM_INPUT_GPIO_RCC RCC_GPIOA
#define PWM_INPUT_GPIO_PORT GPIOA
#define PWM_INPUT_GPIO_PIN GPIO15
#define PWM_INPUT_GPIO_AF GPIO_AF1

#define PWM_INPUT_TIMER_RCC RCC_TIM2
#define PWM_INPUT_TIMER TIM2
#define PWM_INPUT_TIMER_IC_ID_RISE TIM_IC1
#define PWM_INPUT_TIMER_IC_ID_FALL TIM_IC2
#define PWM_INPUT_TIMER_IC_TRIGGER TIM_IC_IN_TI1
#define PWM_INPUT_TIMER_OC_ID_FALL TIM_OC2
#define PWM_INPUT_TIMER_SLAVE_MODE TIM_SMCR_SMS_RM
#define PWM_INPUT_TIMER_SLAVE_TRIGGER TIM_SMCR_TS_TI1FP1
#define PWM_INPUT_DUTY_CCR TIM_CCR2
#define PWM_INPUT_PERIOD_CCR TIM_CCR1

#define BRIDGE_GPIO_AF GPIO_AF6

#define BRIDGE_HI_A_GPIO_RCC RCC_GPIOA
#define BRIDGE_HI_A_GPIO_PORT GPIOA
#define BRIDGE_HI_A_GPIO_PIN GPIO8

#define BRIDGE_HI_B_GPIO_RCC RCC_GPIOA
#define BRIDGE_HI_B_GPIO_PORT GPIOA
#define BRIDGE_HI_B_GPIO_PIN GPIO9

#define BRIDGE_HI_C_GPIO_RCC RCC_GPIOA
#define BRIDGE_HI_C_GPIO_PORT GPIOA
#define BRIDGE_HI_C_GPIO_PIN GPIO10

#define BRIDGE_LO_A_GPIO_RCC RCC_GPIOA
#define BRIDGE_LO_A_GPIO_PORT GPIOA
#define BRIDGE_LO_A_GPIO_PIN GPIO7

#define BRIDGE_LO_B_GPIO_RCC RCC_GPIOB
#define BRIDGE_LO_B_GPIO_PORT GPIOB
#define BRIDGE_LO_B_GPIO_PIN GPIO0

#define BRIDGE_LO_C_GPIO_RCC RCC_GPIOB
#define BRIDGE_LO_C_GPIO_PORT GPIOB
#define BRIDGE_LO_C_GPIO_PIN GPIO1

#define COMPARATOR_ZC_IRQ NVIC_COMP123_IRQ
#define COMPARATOR_BLANK_TIMER_RCC RCC_TIM17
#define COMPARATOR_BLANK_TIMER TIM17
#define COMPARATOR_BLANK_IRQ NVIC_TIM1_TRG_COM_TIM17_IRQ

#define ADC_RCC RCC_ADC12

#define ADC_CHANNEL_PHASEC_VOLTAGE 1
#define ADC_CHANNEL_NEUTRAL_VOLTAGE 2
#define ADC_CHANNEL_PHASEA_VOLTAGE 5
#define ADC_CHANNEL_PHASEB_VOLTAGE 6
#define ADC_CHANNEL_BUS_CURRENT 7 // note this is connected to adc2 (no support yet)
#define ADC_CHANNEL_BUS_VOLTAGE 11
#define ADC_CHANNEL_TEMPERATURE 16

#define ADC_IDX_PHASEC_VOLTAGE 0
#define ADC_IDX_NEUTRAL_VOLTAGE 1
#define ADC_IDX_PHASEA_VOLTAGE 2
#define ADC_IDX_PHASEB_VOLTAGE 3
#define ADC_IDX_BUS_CURRENT 4
#define ADC_IDX_BUS_VOLTAGE 5
#define ADC_IDX_TEMPERATURE 6

#define PHASEC_VOLTAGE_GPIO_PIN GPIO0
#define NEUTRAL_VOLTAGE_GPIO_PIN GPIO1
#define PHASEA_VOLTAGE_GPIO_PIN GPIO4
#define PHASEB_VOLTAGE_GPIO_PIN GPIO5
#define BUS_CURRENT_GPIO_PIN GPIO6
#define BUS_VOLTAGE_GPIO_PIN GPIO0

#define ADC_GPIOA_PINS  PHASEC_VOLTAGE_GPIO_PIN | \
                        NEUTRAL_VOLTAGE_GPIO_PIN | \
                        PHASEA_VOLTAGE_GPIO_PIN | \
                        PHASEB_VOLTAGE_GPIO_PIN | \
                        BUS_CURRENT_GPIO_PIN
#define ADC_GPIOC_PINS  BUS_VOLTAGE_GPIO_PIN

// adc threshold for current channel
#define ADC_WWDG_CURRENT_MAX 400

extern uint8_t adc_channels[7];
