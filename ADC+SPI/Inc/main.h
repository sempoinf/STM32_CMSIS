/*
 * main.h
 *
 *  Created on: Nov 21, 2023
 *      Author: yaao20u291
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#include "stm32f1xx.h"


/*Параметры АЦП*/
// Величина опорного напряжения
#define V_REF 3.3 //typical
// Полная шкала АЦП
#define ADC_FS 0xFFF

void init_clk(void);
void SPI1_Init(void);
void init_adc1(void);
void SPI1_Tx(uint8_t *data, int16_t len);
void Adc_Measure(void);
void SPI1_IRQHandler(void);
void TIM2_IRQHandler(void);
void initTIM2(void);
int16_t Read_ADC(uint8_t n);
void Delay(uint32_t counter);

#endif /* MAIN_H_ */
