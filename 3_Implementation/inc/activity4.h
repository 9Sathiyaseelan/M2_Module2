#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__

#define F_CPU 16000000UL 
#define USART_BAUDRATE 9600 
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) 

#include <util/delay.h>
#include <avr/io.h>

void USARTInit();

int USARTRead();

void activity4_USARTWrite(uint16_t temp);

#endif 
