#include <stdio.h>

int main()
{
	int num, i;
	int odd=0, even=9;
	int arr[10]={0};
	printf("총 10개의 숫자 입력\n");

	for(i=0; i<10; i++)
	{
		printf("입력 :");
		scanf("%d\n", &num);

		switch(num%2)
		{
			case 0 :
				arr[even] = num;
				even--;
				break;

			case 1 :
				arr[odd] = num;
				odd++;
				break;
		}
	}

	
	printf("배열요소의 출력 : ");

	for(i=0; i<10; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}