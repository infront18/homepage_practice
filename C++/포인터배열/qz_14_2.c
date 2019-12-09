#include <stdio.h>

int Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp;

	temp=*ptr2;
	*ptr2=*ptr1;
	*ptr1=*ptr3;
	*ptr3=temp;

	return *ptr1, *ptr2, *ptr3;
}

int main()
{
	int num1, num2, num3;

	printf("num값 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	printf("Swap값은 %d %d %d \n", num1, num2, num3);
	return 0;
}