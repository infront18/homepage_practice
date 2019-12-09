#include <stdio.h>

int main()
{
	char score;
	scanf("%s", &score) ;

	switch(score)
	{
		case'A': printf("best!!!");
			break;

		case'B': printf("good!!");
			break;

		case'C': printf("run!");
			break;

		case'D': printf("slowly~");
			break;

		default : printf("what?");
	}

	return 0;
}