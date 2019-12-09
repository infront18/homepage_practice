#include <stdio.h>

int main()
{
	int score;
	scanf("%d", &score);

	if(score <= 100 && score >= 90)
		printf("A");
	else if(score >= 70)
		printf("B");
	else if(score >= 40)
		printf("C");
	else if(score >= 0)
		printf("D");
	
	return 0;
}