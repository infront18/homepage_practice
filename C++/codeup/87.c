#include <stdio.h>

int main()
{
	int i, num;
	int sum=0;
	scanf("%d", &num);

	for(i=1; ;i++)
	{
		sum+=i;
		if(sum >= num)
			break;
	}
	printf("%d", sum);

	return 0;
}
