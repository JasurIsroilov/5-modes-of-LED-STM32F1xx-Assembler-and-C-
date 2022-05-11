#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f1xx.h"

// Величина задержки между вкл/выкл светодиодов
#define T 10000
#define push_delay 100000

/* Управление светодиодами */
#define	LED_ON()	GPIOA->BSRR = GPIO_BSRR_BS5
#define	LED_OFF()	GPIOA->BSRR = GPIO_BSRR_BR5

#define PB_UP()		GPIOA->BSRR = GPIO_BSRR_BS0
#define PB_DOWN()	GPIOA->BSRR = GPIO_BSRR_BS1


/* Прототипы функций */
void delay(uint32_t takts);

#endif /* MAIN_H_ */
