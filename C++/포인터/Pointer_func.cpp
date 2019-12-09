#include <stdio.h>

void pointerPlus(int *num)
{
	*num += 5;
}

void numPlus(int num)
{
	num += 5;
} 

int main()
{
	int num = 15;
	printf("num 값 : %d\n", num);

	numPlus(num);
	printf("numPlus 사용 후 : %d\n", num);

	pointerPlus(&num);
	printf("pointerPlus 사용 후 : %d\n", num);
	return 0;
}
