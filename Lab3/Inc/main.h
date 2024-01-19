/*
 * main.h
 *
 *  Created on: Nov 21, 2023
 *      Author: yaao20u291
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "stm32f1xx.h"

/* Размеры буферов приёма и передачи */
#define	RX_BUFF_SIZE	256
#define TX_BUFF_SIZE	256

void init_clk(void);
void init_ports(void); 
void init_usart2(void);
void init_tim(void);
void init_button(void);

void increment(void);
void indicator(void); 
void SendString(char *str);
void reset_all(void); 
void ExecuteCommand(void);
void delay(uint32_t value);
void EXTI15_10_IRQHandler(void);
void TIM2_IRQHandler(void);
void USART2_IRQHandler(void);

#endif /* MAIN_H_ */
