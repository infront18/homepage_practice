#include <stdio.h>

int main()
{
	int i=0, t=0, a=0, b=0;

	scanf("%d", &t);

	for (i=1; i<=t; i++) {

		scanf("%d %d", &a, &b);
		
		printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
	}

	return 0;
}
