#include <stdio.h>

int main() 
{
	int array[] = {'A', 'b', '*', 'j', '@'};

	for(int i=0; i<5; i++)
		printf("%d번째 배열의 값은 %c 입니다. \n", i+1, array[i]);
	
	return 0;
}

