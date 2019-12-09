#include <stdio.h>

int main()
{
	int i, index;
	int max = 0;
	int arr[9];
	
	for(i=0; i<9; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	printf("%d \n%d", max, index+1);

	return 0;
}