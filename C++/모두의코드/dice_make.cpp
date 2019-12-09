/*
1. 프로그램 실행시 바로 게임을 시작.
2. printf를 통해서 게임 소개와 가이드를 간단히 적어주고, 
   scanf를 통해 사용자의 입력을 유도합니다.
3. 1번을 누르면 주사위를 굴리고, 2번을 누르면 사용자와 컴퓨터가 던진 주사위 눈의 합을 보여줍니다.
   1,2번 이외에 다른 것을 입력하면 다시 입력하도록 만듭니다.
4. 사용자나 컴퓨터가 주사위를 굴릴 때마다 각각의 특정 변수에 값을 더해 저장합니다.
5. 주사위를 3번 굴려 게임이 끝나면 사용자와 컴퓨터가 굴린 주사위 눈의 합을 보여주고,
   승패를 결정 짓습니다.   
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkScore(int mScore, int cScore) {
  printf("\n-------------------------");
  printf("\n현재 각 플레이어의 점수입니다.");
  printf("\n플레이어의 점수 : %d", mScore);
  printf("\n컴퓨터의 점수 : %d", cScore);
  printf("\n-------------------------");
}

void showEnding(int mScore, int cScore)
{
  if (mScore < cSore)
    printf("컴퓨터 승리입니다.");
  else if(mScore == cScore)
    printf("무승부입니다.");
  else
    printf("사용자 승리입니다.");
}


int main() {
  int diceCount = 0;
  int diceEnd = 3;
  int mScore = 0;
  int cScore = 0;
  int selection;
  srand(time(NULL));

  printf("게임 설명 : 주사위를 총 3 번 굴려 합친 주사위 눈의 합이 더 높은 사람이 이기게 됩니다.");
  printf("\n주사위 게임을 시작하겠습니다.");
  printf("\n------------------------");

  while(diceCount < diceEnd) {
    printf("\n주사위를 굴려주세요. 1번 주사위 굴리기 2번 현재 눈의 합 확인하기 : ");
    scanf("%d", &selection);
    
    if(selection == 1) {
      int mResult = (rand() % 6) + 1;
      int cResult = (rand() % 6) + 1;
      
      mScore += mResult;
      cScore += cResult;
      
      printf("\n플레이어의 차례입니다. 주사위를 굴립니다.");
      printf("\n띠링! 주사위의 눈은 %d 입니다.", mResult);
      printf("\n현재 총 점수는 %d 입니다.", mScore);
      
      printf("\n컴퓨터의 차례입니다. 주사위를 굴립니다.");
      printf("\n띠링! 주사위의 눈은 %d 입니다.", cResult);
      printf("\n현재 총 점수는 %d 입니다.", cScore);
      
      diceCount++;
    } else if(selection == 2) {
      checkScore(mScore, cScore);
    } else {
      printf("\n잘못 입력하셨습니다.");
    }
  }
  showEnding(mScore, cScore);
 
  return 0;
}

