#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__

#define F_CPU 16000000UL 	
#define LED_PORT (PORTD)    
#define LED_PIN  (PORTD2) 
#define BUTTON_SENSOR  (PORTD0)  
#define TEMP_SENSOR  (PORTD1) 

#include <util/delay.h>
#include <avr/io.h>

void peripheral_init(void);

void TurnLED_ON();

void TurnLED_OFF();

int activity1_LED(void);

#endif 
