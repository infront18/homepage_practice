#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main(void)
{
	char szChoice = 0;
	int x = 0, y = 0;
	while(TRUE)
	{
		gotoxy(x, y); //변수 x와 y에 저장된 값으로 좌표 이동
		printf("★");
		if(kbhit())  //키보드 값을 입력받았다면 
		{
			szChoice = getch();
			switch(szChoice)
			{
				case 'w': //위
					y--; //y좌표 1감소
					break;
				case 'a': //왼쪽 
					x--; //x좌표 1감소
					break;
				case 's' : //아래
					y++; //y좌표 1증가
					break;
				case 'd': //오른쪽
					x++; //x좌표 1증가
					break; 
			}
			Sleep(50);
			system("cls");
		}
	}
	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
