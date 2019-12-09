/*
 * 20191016_first.c
 *
 * Created: 2019-10-16 오전 8:36:05
 * Author : admin
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL

int main(void)
{
	DDRD = 0xFF; // D포트 초기화
	TCCR0 = 0x03;  // TCC 레지스터 정의. 32 prescalere일 때 마지막이 011
	TCNT0 = 131;  // 255-125+1 = 131 시작점.
	
	int num=0;
	
	while (1)
	{		
			while((TIFR & 0x01)==0);  // 오바플로우가 발생하지 않으면 그냥 머물러있음
			num++;  
			if(num==100){
				PORTD = ~PORTD;// ~ HIGH -> LOW 왔따리갔따리
				num=0;	
			}
			TIFR = 0x01;  // clear 레지스터
			TCNT0= 131; 
			
	}
}
