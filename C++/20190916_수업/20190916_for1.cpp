#include <stdio.h>

int main()
{
	int i, dan;
	
	printf("구구단의 단을 입력하세요.\n");\
	scanf("%d", &dan);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d 입니다. \n", i, dan, i * dan);
	}

return 0;
}