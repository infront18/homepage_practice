#include <stdio.h>

void MaxAndMin(int** pmax, int** pmin, int* array, int len)
{
	int i, max = 0, min = 0;

	for (i = 0; i < len; i++)
	{
		if (array[max] < array[i])
			max = i;
		if (array[min] > array[i])
			min = i;
	}

	*pmax = &array[max];  
	*pmin = &array[min];  

}

int main(void)
{
	int i;
	int* maxPtr, * minPtr;
	int arr[5];
	int len = sizeof(arr) / sizeof(int);

	for (i = 0; i < len; i++)
	{
		printf("정수입력: ");
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, len);

	printf("MAX: %d Min: %d", *maxPtr, *minPtr);
	return 0;
}