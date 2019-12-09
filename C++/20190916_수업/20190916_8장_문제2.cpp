#include <stdio.h>

int main()
{
	int a, b;

	printf("두 개의 정수를 입력하시오. \n");
	scanf("%d %d", &a, &b);

	if ( a >= b)
	{
		printf("%d \n", a-b);
	}
	else 
	{
		printf("%d \n", b-a);
	}	
	return 0;
}