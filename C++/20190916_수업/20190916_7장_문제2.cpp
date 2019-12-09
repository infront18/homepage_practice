#include <stdio.h>

int main()
{
	int n, i;
	int result = 1;

	printf("정수값을 입력하시오. \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		result = result * i;

	printf("%d! = %d \n", n, result);

	return 0;
}