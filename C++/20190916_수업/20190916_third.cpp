#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0 || i % 3 == 0)
		{
			printf("%d는 배수입니다. \n", i);
		}
	}
	return 0;
}