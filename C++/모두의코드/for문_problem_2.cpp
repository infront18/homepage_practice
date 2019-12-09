#include <stdio.h>

int main()
{
	int i, j;

	for(i=0; i<10; i++) //행
	{
		for(j=0; j<i; j++) //공백
		{
			printf(" "); 
		}
			for(j=0; j<2*(10-i); j++) //별
				printf("*");
			
	printf("\n");
	}
	
	return 0;
}