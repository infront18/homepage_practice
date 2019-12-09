/*
 * 20191002_timeer.c
 *
 * Created: 2019-10-02 오후 3:57:55
 * Author : admin
 */ 

#include <avr/io.h>


int main(void)
{
    DDRD = 0xff;
	TCCR0 = 0x04;
	TCNT0 = 6;
	
    while (1)
	{
		while((TIFR & 0x01) == 0);
		PORTD = ~PORTD;
		TIFR = 0x01;
		TCNT0 = 6;
    
    }
}

