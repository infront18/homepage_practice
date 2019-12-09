#include <stdio.h>

int main()
{
	int arr[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
	int a=sizeof(arr);
	int b=sizeof(arr[0]);
	int c=sizeof(arr[0]);
	int d=sizeof(arr[0][0]);
	

	printf("%d %d %d %d", a,b,c,d);
}