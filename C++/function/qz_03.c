#include <stdio.h>

int Fibo(int num);

int main()
{
	int num;
	printf("정수를 입력 : ");
	scanf("%d", &num);

	if(num>1)
		Fibo(num);
	else
		printf("오류");
	return 0;
}

int Fibo(int num)
{
	int a=0, b=1, c, i;
	if(num==1)
		printf("%d ", a);
	else
		printf("%d %d ", a, b);

	for(i=0; i<num-2; i++)
	{
		c=a+b;
		printf("%d ", c);
		a=b;
		b=c;
	}
}
