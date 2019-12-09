#include <stdio.h>

int main()
{
	int num, count=0, temp=2;

	printf("숫자 n을 입력하세요 : ");
	scanf("%d", &num);

	while(1)
	{
		if(temp>num) break;
		temp *=2;
		count++;
	}
	
	printf("공식을 만족하는 k의 최댓값은 %d이다.", count);
	return 0;
}
