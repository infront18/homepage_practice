#include <stdio.h>

int main(void)
{
	int num1, num2;
	num1=printf("12345\n");
	num2=printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	return 0;
}

//결과값 6 15 문자열에서는 null값이 들어간다