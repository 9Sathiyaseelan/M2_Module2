#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(activity1_LED()==1) 
        {
           
            TurnLED_ON();
            temp=activity2_GetADC(); 
            activity3_PWM(temp); 
		    activity4_USARTWrite(temp); 
            

        }
        else 
        {
            TurnLED_OFF();
		    _delay_ms(200);
        }

    }
    return 0;
}
