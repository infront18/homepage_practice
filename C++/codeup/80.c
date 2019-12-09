#include <stdio.h>

int main()
{
	int n, i = 1;
	int sum = 0;
	
	scanf("%d", &n);
	
	while (1)
	{
		sum += i;
		if (n <= sum)
		{
			printf("%d\n", i);
			break;
		}
		i++;
	}
	return 0;
}
