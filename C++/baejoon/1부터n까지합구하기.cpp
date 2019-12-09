#include <stdio.h>

int main()
{
	int i, n, sum=0; //반드시 초기화값 설정.
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		sum+=i;	
		printf("%d", sum);

	return 0;
}
