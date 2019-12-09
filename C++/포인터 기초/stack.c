// 1-03 parameter와 stack의 이해

#include <stdio.h>

void sub(int n)
{
	int k = 55;
	printf("sub함수 n = %3d, &n = %u \n", n, &n);
	printf("sub함수 k = %3d, &k = %u \n", n, &k);
}

int main(void)
{
	int a = 10;
	printf("main함수 a = %3d, &a = %u \n\n", a, &a);
	sub(a)	;
	
	return 0;
}
