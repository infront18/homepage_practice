#include <stdio.h>

int main()
{
	unsigned int n;
	int i;
	scanf("%d", &n);

	for ( i = n; 1 <= i; i-- )
		printf("%d \n", i);

	return 0;
}