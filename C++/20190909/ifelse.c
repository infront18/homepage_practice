#include <stdio.h>

int main()
{
	int a;
	printf("점수를 입력하세요.\n");
	scanf("%d", &a);
	
	if (a >= 90)
	{
		if (a >= 95)
		{
			printf("A+학점입니다.", a);
		}
		else
		{
			printf("A-학점입니다.", a);
		}
	}
	
	else if (a >= 80)
	{
		printf("B학점입니다.", a);
	}
	
	else if (a >= 70)
	{
		printf("C학점입니다.", a);
	}
	else if (a >= 60)
	{
		printf("D학점입니다.", a);
	}
	else
	{
		printf("F학점입니다.");
	}
	
	return 0;
}

