#include <stdio.h>

int Max(int a, int b, int c);
int Min(int a, int b, int c);

int main()
{
	int a, b, c;
	printf("세 정수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("가장 큰 수 : %d \n", Max(a, b, c));
	printf("가장 작은 수 : %d \n", Min(a, b, c));
}

int Max(int a, int b, int c)
{
	if(a>b)
		return (a>c) ? a : c;
	else
		return (b>c) ? b : c;
}

int Min(int a, int b, int c)
{
	if(a<b)
		return (a<c) ? a : c;
	else
		return (b<c) ? b : c;
}