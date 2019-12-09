#include <stdio.h>

int times(int a, int b);

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	if(x<y)
		times(x, y);
	else
		times(y, x);
	return 0;
}

int times(int a, int b)
{
	for(int i=a; i<=b; i++)
		for(int j=1; j<10; j++)
			printf("%d * %d = %d \n", i, j, i*j);
	printf("\n");
	return 0;
}

