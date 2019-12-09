#include <stdio.h>

int main()
{
	int num=1;
	int total=0;

	while(num != 0)
	{
		printf("정수를 입력하시오. : ");
		scanf("%d", &num);
		total+=num;
	}
	
	printf("합은? %d \n", total);
	return 0;
}