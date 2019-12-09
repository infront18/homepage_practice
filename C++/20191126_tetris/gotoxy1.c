#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main()
{
	gotoxy(4,2);
	printf("A");
	
	gotoxy(6,6);
	printf("B");
	
	gotoxy(8,12);
	printf("C");
	
	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
