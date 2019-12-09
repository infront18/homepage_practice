#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];
	int total=0;
	int len;
	int i;

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	for(i=0; i<strlen(str); i++)
	{
		if(str[i]>='0' && str[i]<='9')
			total+=str[i]-48;
	}
	printf("합계: %d\n", total);
	system("pause");
}
