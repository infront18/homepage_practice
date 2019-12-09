#include <stdio.h>

int main()
{
	int i, dan;

	printf("단을 입력하시오. \n");
	scanf("%d", &dan);

	for(i=1; i<=dan; i++)
	{
		printf("%d %d = %d \n", i, dan, i * dan);
	}
	return 0;
}
