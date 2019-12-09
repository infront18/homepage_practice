#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main()
{
	gotoxy(5,3);
	printf("A\n");
	printf("A가 출력된 곳은 X:5, Y:3 입니다.\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
