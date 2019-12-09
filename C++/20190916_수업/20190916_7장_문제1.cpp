#include <stdio.h>

int main()
{
	int s, e;
	int result;

	printf("시작하는 숫자와 끝의 숫자를 입력하시오. \n");
	scanf("%d %d", &s, &e);

	for (result=0; s < e; s++)
		result+=s;

	printf("합계: %d \n", result);
	
	return 0;
}