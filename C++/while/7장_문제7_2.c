#include <stdio.h>

int main()
{
	int num;
	int i = 1;

	printf("양수를 입력하시오. \n");
	scanf("%d", &num);

	while (i <= num)
	{
		printf("%d ", 3*i);
		i++;
	}
	return 0;
}
