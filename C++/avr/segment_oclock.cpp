/*
 * 0~99.c
 *
 * Created: 2019-09-25 오후 10:59:40
 * Author : SW
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

int main(void)
{
   DDRC = 0xFF;
   DDRA = 0xFF;
   char arr[10] = {0b00111111, 0b00001100, 0b01011011, 0b01011110,
           0b01101100, 0b01110110, 0b01110111, 0b00111100,
           0b01111111, 0b01111110};
           
    while (1) 
    {
      int i ;
      int j ;
      int a ;
      for(i=0; i<10; i++)
      {
         for(j=0; j<10; j++)
         {
            for(a=0; a<100; a++)
            {
               PORTC=0x01;
               PORTA=arr[i];
               _delay_ms(5);
               PORTC=0x02;
               PORTA=arr[j];
               _delay_ms(5);
            }
         }
      }
   }
}