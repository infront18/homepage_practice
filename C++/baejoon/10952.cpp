#include <stdio.h>

int main()
{
	int n, a, b;
	int i=0;

	while(i<=n) {
		scanf("%d %d", &a, &b) != EOF;
		printf("%d \n", a+b);
	}

	return 0;
}