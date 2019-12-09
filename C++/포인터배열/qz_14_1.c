#include <stdio.h>

void SquareByValue(int num)
{
	printf("num의 제곱값은 %d \n",(num*num));	
}

int SquarByReference(int * ptr)
{
	int num = *ptr;
	*ptr=num*num;
	return *ptr;
}

int main(void)
{
	int num1;
	printf("num 값을 입력하세요 \n");
	scanf("%d",&num1);

	SquareByValue(num1);

	SquarByReference(&num1);

	printf("Refernce 함수의 제곱값은 %d",num1);
	return 0;
}	