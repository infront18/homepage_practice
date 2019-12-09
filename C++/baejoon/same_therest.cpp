#include <stdio.h>

int main()
{
	int diff=0, same=0;
	int arr[10]={0,};
	int num[42]={0,};

	for(int i=0; i<10; i++) {
		scanf("%d", &arr[i]);
		num[arr[i]%42]++;

		if(arr[i]%42==0)
			same++;
	}
	
	for(int i=0; i<42; i++) {
		if(num[i]>0)
			diff++;
	}
	printf("%d", diff);

	return 0;
}