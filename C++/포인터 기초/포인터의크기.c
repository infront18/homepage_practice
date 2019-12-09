// 1-02 포인터의 크기

#include <stdio.h>

int main()
{
	int a;
	char c;
	printf("char* = %d byte \n", sizeof(&c));
	printf("int* = %d byte \n", sizeof(&a));
	printf("double* = %d byte \n", sizeof(double*));

	puts("포인터는 자료형에 상관없이 4바이트이다.");
	return 0;
}
