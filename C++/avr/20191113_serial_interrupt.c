/*
 * 20191106_Serial.c
 *
 * Created: 2019-11-06 오전 9:42:54
 * Author : admin
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include <stdio.h>
#include <avr/interrupt.h>

int data;

ISR(USART0_RX_vect)
{
	data = UDR0;
	
	if(data == 0x01) 
		PORTB = 0xff;
	else            
		PORTB = 0x00;
}


int main()
{
	DDRB=0xff;
	
	UCSR0A = 0x02;	//더블스피드
	UCSR0B = 0x98; 
	UBRR0H = 0;
	UBRR0L = 207; 
	sei();    //모든 인터럽트 허용
	
	while(1)
	{

	}
	return 0;
}


