#include <stdio.h>

int main()
{
	int x;
	char plus, minus;
	char odd, even;
	scanf("%d", &x);

	if(x != 0){
		if(x < 0){
			printf("%s\n", "minus");
		}
		else
			printf("%s\n", "plus");
	}

	if(x != 0){
		if(x % 2 == 0){
			printf("%s\n", "even");
		}
		else
			printf("%s\n", "odd");
	}
	return 0;
}