#include <stdio.h>

int main()
{
	int arr[6]={1,2,3,4,5,6};
	int *ptr1=&arr[0];
	int *ptr2=&arr[5];
	int i, temp;

	for(i=0; i<3; i++) //배열의 절반 잘라서 양쪽으로 비교
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2--;
	}

	for(i=0; i<6; i++)
		printf("%d ", arr[i]);


	return 0;
}