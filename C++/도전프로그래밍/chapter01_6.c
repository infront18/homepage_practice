#include <stdio.h>

int main()
{
	int h=0, m=0, s=0;

	printf("초를 입력하세요 : ");
	scanf("%d", &s);

	h = s / 3600;
	m = (s % 3600) / 60;
	s = s % 60;
	printf("%d시간 %d분 %d초", h, m, s);
	return 0;
}
