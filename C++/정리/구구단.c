#include <stdio.h>

int main(void)
{
	int x=2, y=0;
			
	while(x<10)
	{
			y=1;
			while(y<10)
			{
				printf("%d * %d = %d \n", x, y, x*y);
				y++;	
			}
			x++;
	}
	return 0;
}


