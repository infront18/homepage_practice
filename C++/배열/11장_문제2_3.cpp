#include <stdio.h>

int main()
{
	char str[100];
	int len=0;
	int i;
	char max=0;

	printf("영단어 입력 : ");
	scanf("%s", str);

	while(str[len] != 0)
		len++;

	for(i=0; i<len; i++)
		if(max<str[i])
			max=str[i];

	printf("가장큰 아스키 코드 값은 : %c \n", max);

	return 0;
}