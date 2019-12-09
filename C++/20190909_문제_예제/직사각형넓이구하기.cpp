#include <stdio.h>

int main()
{
	int x, y;
	int x1, y1;
	int area;
	
	printf("좌 상단의 x, y 좌표:");
	scanf("%d %d", &x, &y);
	printf("우 하단의 x, y 좌표:");
	scanf("%d %d", &x1, &y1);
	area = (x1 - x) * (y1 - y);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);
	return 0;
}

