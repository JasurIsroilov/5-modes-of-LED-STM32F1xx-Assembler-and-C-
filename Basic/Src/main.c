#include "main.h"

/**
  * @brief  Основная программа
  * @param  None
  * @retval None
  */
int main(void)
{
	uint32_t D;
	uint8_t n=1;
	uint32_t W;


	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;	//включить тактирование GPIOA a=+b (a=a+b)
	//RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;	//включить тактирование GPIOB

	//очистка полей
	//GPIOA->CRL &= ~(GPIO_CRL_CNF5 | GPIO_CRL_MODE5);
	//и конфигурация
	//GPIOA->CRL |= GPIO_CRL_MODE5_1;		//PA5 (LD3), выход 2МГц

	GPIOA->CRL &= ~(GPIO_CRL_CNF5 | GPIO_CRL_MODE5);
	GPIOA->CRL |= GPIO_CRL_MODE5_1;

	GPIOA->CRL &= ~(GPIO_CRL_CNF0 | GPIO_CRL_MODE0);
	GPIOA->CRL |= GPIO_CRL_CNF0_1;
	//SET_BIT(GPIOA->ODR,GPIO_ODR_ODR0);

	GPIOA->CRL &= ~(GPIO_CRL_CNF1 | GPIO_CRL_MODE1);
	GPIOA->CRL |= GPIO_CRL_CNF1_1;
	//SET_BIT(GPIOA->ODR,GPIO_ODR_ODR1);


	//Бесконечный цикл
	while(1) {
		//LED_ON();						//включить первый светодиод
		//delay(push_delay);				//вызов подпрограммы задержки
		//LED_OFF();						//выключить первый светодиод
		//delay(push_delay);				//вызов подпрограммы задержки


		if((GPIOA->IDR & GPIO_IDR_IDR0)==0x00)
		{
			if(n<5)
			{
				delay(push_delay);
				n++;

			}
		}
		if((GPIOA->IDR & GPIO_IDR_IDR1)==0x00)
		{
			if(n>1)
				{
					delay(push_delay);
					n--;
				}
		}

		W=2000*n;
		D=T-W;

		LED_ON();
		delay(W);
		LED_OFF();
		delay(D);

		/*if(!READ_BIT(GPIOA->IDR, GPIO_IDR_IDR1))
		{
		      LED_ON();
		}
		else
		{
			LED_OFF();
		}*/
	}
}

/**
  * @brief  Подпрограмма задержки
  * @param  takts - Кол-во тактов
  * @retval None
  */
void delay(uint32_t takts)
{
	for (uint32_t i = 0; i < takts; i++) {};
}
