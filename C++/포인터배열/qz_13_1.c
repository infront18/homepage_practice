#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr=arr;
	
	int i;
	for(i=0; i<5; i++)
	{
		*ptr +=2;
		*ptr++;
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}