#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <avr/interrupt.h>


ISR(INT0_vect)
{
	PORTC = ~PORTC;     //PORT에 연결한 LED 켜기
}

int main(void)
{
	
	EIMSK = 0x01;      //int0의 인터럽트를 허용
	EICRA = 0x02;      //int0의 하강엣지 트리거
	
	sei();    //모든 인터럽트 허용
	
	int i;
	int number [10] = {0b00111111, 0b00001100, 0b01011011, 0b01011110,
					   0b01101100, 0b01110110, 0b01110111, 0b00111100,
					   0b01111111, 0b01111110};
	
	DDRA = 0xFF;    //A포트에 세그먼트 연결
	DDRD = 0x00;
	DDRC = 0xFF;
	
	while (1)
	{
		for (i=0; i<10; i++)        //평소 상태 출력
		{
			PORTA = number[i];
			_delay_ms (500);
		}
	}
}
      //PORT에 연결한 LED 켜기
