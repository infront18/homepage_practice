#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d", &n);

	for(i=1; i<=n; i++) //1부터 시작해 n까지 1씩 증가시키면서 반복한다.
	{
		if(i%3==0)
 		   continue; //3의 배수라면 아래 부분은 건너뛰고! 계속~
		   printf("%d ", i); //결국 3의 배수가 아닐 때에만 출력된다.
	}

	return 0;
}