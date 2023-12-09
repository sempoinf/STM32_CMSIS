/*
 * main.h
 *
 *  Created on: Nov 21, 2023
 *      Author: yaao20u291
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

#include "stm32f1xx.h"

/* Прототипы функций */
void init_clk(void);
void init_ports(void);
void init_button(void);
void init_tim(void);

void reset_all(void);
void increment(void);
void delay(uint32_t value);
void indicator(void);
void EXTI15_10_IRQHandler(void);
void TIM2_IRQHandler(void);

#endif /* MAIN_H_ */
