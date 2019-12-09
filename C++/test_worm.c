#include <Windows.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <queue>
#include <stdio.h>

#define MAX_N 10
#define RIGHT 77
#define DOWN 80
#define LEFT 75
#define UP 72

using namespace std;

struct WORM{
	int x, y;
	int next_way;
	bool eat;
};

bool wriggle(int(*board)[MAX_N], queue<WORM> &del_tail, WORM &bfw);
void init(int(*board)[MAX_N], queue<WORM> &del_tail, WORM &BFW);
void food(int(*board)[MAX_N]);
void draw(int board[][MAX_N]);
int input(int way);
void game();

int main(){
	game();
	system("cls");
	printf("\n\n\ngame over\n\n\n\n");
	return 0;
}

void game(){
	int board[MAX_N][MAX_N] = {0};
	bool flag = true;
	int speed = 300;

	queue<WORM> del_tail;
	WORM bfw;
	init(board, del_tail, bfw);
	draw(board);

	while(flag){
		bfw.next_way = input(bfw.next_way);
		flag = wriggle(board, del_tail, bfw);
		draw(board);

		Sleep(speed);
		speed = speed - 1 > 100 ? speed - 1 : speed;
	}
}
