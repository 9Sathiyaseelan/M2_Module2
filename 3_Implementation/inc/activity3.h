#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__

#define PWM_20_PERCENT (205) 
#define PWM_40_PERCENT (410) 
#define PWM_70_PERCENT (717) 
#define PWM_95_PERCENT (973) 

#include <util/delay.h>
#include <avr/io.h>


void InitTimer();

void activity3_PWM(uint16_t temp);

#endif 
