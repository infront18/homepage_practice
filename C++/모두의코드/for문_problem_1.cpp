#include <stdio.h>

int main()
{
	int i, j;

	for (i=1; i<10; i++)  // 행
	{
		for(j=1; j<10-i; j++) // 공백
		{
			printf(" ");
		}

		for (j=1; j<=2*i-1; j++)  // 별
		{
			printf("*");
		
		}
		printf("\n");
	}
	

	return 0;
}