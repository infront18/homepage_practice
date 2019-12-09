#include <stdio.h>

int main()
{
	int num=10;
	int *pb1=&num;
	int *pb2=pb1;

	(*pb1)++;
	(*pb2)++;
	printf("%d \n", num);
	return 0;
}
