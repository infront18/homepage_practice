#include <stdio.h>

int Odd();
int Even();
int arr[10] = {0, };
int* p = arr;

int main()
{
	for(int i=1; i<=10; i++){
		printf("ÀÔ·Â : ");
		scanf("%d", &arr[i]);
	}

	Odd();
	Even();

	return 0;
}

int Odd()
{
	printf("È¦¼ö Ãâ·Â : %d, %d, %d, %d, %d \n", *(p+1), *(p+3), *(p+5), *(p+7), *(p+9));
	return 0;	
}

int Even()
{
	printf("Â¦¼ö Ãâ·Â : %d, %d, %d, %d, %d", *p, *(p+2), *(p+4), *(p+6), *(p+8));
	return 0;
}

