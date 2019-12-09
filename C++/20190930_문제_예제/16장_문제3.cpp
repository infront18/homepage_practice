#include <stdio.h>

int score[5][5];

void WriteRecord(void) 
{
	int i, j;
	int sum;
	for(i=0; i<4; i++) {
		sum=0;
		printf("%번째 학생의 성적 \n", i+1);
		for(int j=0; j<4; j++) {
			printf("과목 %d: ", j+1);
			scanf("%d", &score[i][j]);
			sum+=score[i][j];
		}
		score[i][4]=sum;
	}
}

void WriteSumRecord(void)
{
	int i, j;
	int sum;

	for(i=0; i<4; i++) {
		sum = 0;
		for(int j=0; j<4; j++) {
			sum+=score[j][i];
			score[4][i]=sum;
		}
		score[4][4];
	}
}

void ShowAllRecord(void)
{
	int i, j;

	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%3d", score[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
	return 0;
}