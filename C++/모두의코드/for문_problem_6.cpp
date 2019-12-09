#include <stdio.h>

int main()
{
	int a, b, c;
	int count = 0;

	for(a=1; a<=2000; a++)
	{
		for(b=1; b<=2000; b++)
		{
			for(c=1; c<=2000; c++)
			{
				if((a+b+c==2000) && (a>b) && (b>c))
				{
					count+=1;
				}
			}	

		}		
	}
	printf("경우의 수는 : %d \n", count);
	return 0;
}
