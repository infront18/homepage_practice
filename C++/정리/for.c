#include <stdio.h>

int main(void)
{
	int sum=0;
	int i, num;
	printf("0부터 num까지의 합, num은?");
	scanf("%d", &num);
	
	for(i=0; i<num+1; i++)
		sum=i+sum;
		
	printf("0부터 %d까지 덧셈결과: %d \n", num, sum);
	return 0;
}
