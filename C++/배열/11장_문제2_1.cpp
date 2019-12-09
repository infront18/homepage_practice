#include <stdio.h>

int main()
{
	char str[100];
	int len=0;

	printf("영단어를 입력하세요. \n");
	scanf("%s", str);

	while(str[len] != 0)
		len++;

	printf("%d", len);
	return 0;
}
