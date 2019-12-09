/*
 * 20191106_Serial.c
 *
 * Created: 2019-11-06 오전 9:42:54
 * Author : admin
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>


int main()
{
	UCSR0B = 0x18; // rx, tx enable
	UBRR0H = 0;
	UBRR0L = 103; // boudrate 9600
	
	while(1)
	{
		while((UCSR0A&0x80) == 0); // 수신완료될때까지 대기
		
		int data;
		data = UDR0;
		DDRB = 0xff;
		
		if(data == 0x01) // 만약 터미널에서 날아온 데이터가 숫자 1 이라면 LED 전부 켜라.
			PORTB = 0x00;
		else            // 1 이외의 값이면 LED 전부 꺼.
			PORTB = 0xff;
	}
	return 0;
}




