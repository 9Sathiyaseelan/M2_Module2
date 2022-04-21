#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__

 
#include <util/delay.h>
#include <avr/io.h>


void InitADC();


uint16_t ReadADC(uint8_t ch);

uint16_t activity2_GetADC(void);

#endif 
