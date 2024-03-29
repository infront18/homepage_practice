/* 지렁이 게임*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int rand_x = 0; //난수생성하여 gotoxy로 커서 이동시켜서 먹이 놓기 위한것
int rand_y = 0;
int speed = 150; // 게임의 스피드를 조절

unsigned char body[1823]; 
// 게임의 맵 좌표(총 1823칸)에 해당하는 곳에 지렁이 몸의 존재여부를 체크하기 위하여
//  지렁이 머리가 몸통에 박았을 경우 지렁이 머리 위치가 몸통위치와 겹치는 것을 체크하기 위한것
//  1823 = (y)*76 + x (y최대가 75이고 x최대가 23) 
unsigned int remove_tail_check[75*23];
// 지렁이의 꼬리가 지나가는 부분(빈공간이 될 부분)을 체크하기 위한 배열로 배열의 값에는 맵의 좌표가 저장됨
//  point_head와 point_tail를 포인터로 사용함

int point_head; 
// remove_tail_check의 포인터로 쓰임
//지렁이의 몸이 커질때마다 포인터를 1씩 증가시키면서 포인터가 가리키는 값에는 새로이 추가되는(먹이를 먹어서) 지렁이 몸의 위치값을 나타냄
int point_tail;
// remove_tail_check의 포인터로 쓰임
//지렁이의 자취(꼬리가 지나가는 부분)를 체크하여 없애주기 위한 포인터
//지렁이가 움직일때마다 point_tail이 가리키는 부분에 저장된 맵의 좌표로 가서 그곳의 지렁이 흔적을 없앰

void gotoxy(int x, int y){ //가로x, 세로y 좌표로 커서를 이동시키는 함수
 COORD Pos = {x -1, y-1};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void back_round(){  // 이 함수는 게임맵의 외곽선을 표시하기 위한것
 unsigned char a = 0xa6;
 int i,j;
 int x=39;
 int y=24;
 /************* 맨 윗단 그리기*********************/
 printf("%c%c",a,0xa3);
 for(i=0;i<x-2;i++)printf("%c%c",a,0xa1);
   printf("%c%c\n",a,0xa4);

 /************* 중간 그리가************************/
 for(j=0;j<y-2;j++){
  printf("%c%c",a,0xa2);
  for(i=0;i<x-2;i++)printf("  ");
    printf("%c%c",a,0xa2);
  printf("\n");
}
 /************* 맨 밑단 그리기*********************/
printf("%c%c",a,0xa6);
for(i=0;i<x-2;i++)printf("%c%c",a,0xa1);
 printf("%c%c\n",a,0xa5);
}
// 가로 37칸, 세로 22칸 

void game_option(){ // 게임옵션 설정(스피드)을 위한 함수
 while(1){
  int nan = 10;
  system("cls");
  gotoxy(1,1);
  printf("숫자가 높을수록 난이도가 높습니다\n");
  printf("게임의 난이도를 선택하고 엔터키를 누르세요(1~6) :");
  scanf("%d",&nan);
  if(nan == 1){
   speed = 150;
 }else if(nan == 2){
   speed = 140;
 }else if(nan == 3){
   speed = 130;
 }else if(nan == 4){
   speed = 120;
 }else if(nan == 5){
   speed = 110;
 }else if(nan == 6){
   speed = 100;
 }else{
   printf("1~6사이의 숫자를 입력하세요!\n");
   Sleep(300);
   continue;
 }
 system("cls");
 break;
}
}

int main(){
 unsigned char start = 2; // 게임 스타트를 체크하기 위한 변수
 int x,y; //맵의 가로 : x, 맵의 세로 : y
 int ago_x; // 지렁이의 꼬리 흔적을 없애기 위해 좌표값을 임시 저장하기위한 변수
 int ago_y;
 int body_number; //지렁이가 늘린 몸통 수를 가리킴
 unsigned char chr; // 방향키의 키값을 받기위한 변수
 srand(time(NULL)); // 난수 초기화 설정

 while(1){
  /*********** 변수 초기화 ***************/
  ago_x = 3;
  ago_y = 2;
  chr = 99;
  point_head = 1;
  point_tail = 0;
  body_number = 1;
  memset(body,0,1823);
  memset(remove_tail_check,0,1725);
  remove_tail_check[0] = 155;

  /*************  게임의 초기화면 **********************/
  printf("게임을 시작하려면 1을 누르시오\n");
  printf("게임을 종료하려면 0를 누르시오\n");
  start = getch();
  if(start == '0'){
   break;
 }else if(start != '1'){
   continue;
 }
  game_option(); //게임의 스피드 조절
  gotoxy(1,1);
  back_round();  //게임맵 외곽선 그리기
  rand_x = ((rand()%37))*2+3; //난수생성하여 먹잇감의 좌표를 얻음
  rand_y = (rand()%22)+2;
  gotoxy(rand_x, rand_y);  
  printf("□");   //먹잇감의 좌표로가서 먹이를 나타냄
  x=3;  // 지렁이의 최초 시작 좌표를 나타냄
  y=2;
  gotoxy(x,y);
  while(1){
   if(kbhit() != 0){  //아무키나 입력받았을시 if문을 실행함
    chr = getch();
    if(chr == 0 || chr == 0xe0){
     chr = getch();
   }
 }
   if(chr == 72){ //방향키 '상' 입력받을시
    y -= 1;
  if(y<2){
     system("cls"); // 화면을 깨끗이 지운다
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
   }else if(chr == 80){ //방향키 '하' 입력받을시
   y += 1;
   if(y > 23){
     system("cls");
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
   }else if(chr == 75){ //방향키 '좌' 입력받을시
    x -= 2; // 네모는 특수문자(2byte)이므로 가로는 2칸씩 이동해야함
    if(x<3){
     system("cls");
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
   }else if(chr == 77){ //방향키 '우' 입력받을시
   x += 2;
   if(x > 75){
     system("cls");
     gotoxy(30,10);
     printf("GAME OVER\n");
     break;
   }
 }
   if((x == rand_x)&&(y == rand_y)){ // 먹이를 먹었을 경우 
    //난수를 사용하여 새로운 먹이를 맵에 표현함
    rand_x = ((rand()%37))*2+3;
    rand_y = (rand()%22)+2;
    gotoxy(rand_x, rand_y);
    printf("□"); //지렁이 먹이 그림

    //아래 코드는 지렁이가 먹이를 먹었으므로 새로이 추가된 몸통 좌표를 추가하고 지렁이의 자취좌표를 추가하는 것
    //먹이를 먹은 경우에는 꼬리 자취를 지울필요없으므로(몸이 늘어나서) 이에 관한 코드는 없고, 
    //그래서 if문 실행후 바로 반복문(while)의 조건문으로 이동함
    remove_tail_check[point_head] =  (y)*76 + x; // 지렁이의 자취를 맵좌표값으로 추가
    point_head++;
    if(point_head >= 1656)point_head = 0;
    body[(y)*76 + x] = 1; //몸통 좌표 추가(1이 몸통이 있다는 표시, 0이 몸통이 없다는 표시)
    body_number++;
    if(body_number >= 10){
     speed -= 10;
     if(speed < 40)speed = 40;
     body_number = 0;
   }
   continue;
 }

   //꼬리가 지나간 부위를 지우기 위한 코드임
   ago_y = remove_tail_check[point_tail]/76;  //ago에 임시저장
   ago_x = remove_tail_check[point_tail]%76;
   if(ago_x == 0)ago_x = 75;
   gotoxy(ago_x,ago_y);
   printf("%c%c",0x00,0x00);
   body[remove_tail_check[point_tail]] = 0; //지렁이가 지나간 좌표는 몸이 존재하지 않으므로 몸통좌표에서 삭제
   point_tail++;
   if(point_tail >= 1656)point_tail = 0;

   //지렁이 머리가 가는 방향으로 지렁이 머리를 새로이 그려넣기 위한 코드임
   remove_tail_check[point_head] =  (y)*76 + x;
   if(body[remove_tail_check[point_head]] == 0){ //지렁이 머리가 있을 곳에 지렁이 몸통이 없을 경우
    body[remove_tail_check[point_head]] = 1;
   }else{     //지렁이 머리와 몸통좌표가 겹쳤을 경우로, gameover임
    system("cls");
    gotoxy(30,10);
    printf("GAME OVER\n");
    break;
  }
  point_head++;
  if(point_head >= 1656)point_head = 0;


  gotoxy(x,y); 
   printf("□"); //지렁이 머리를 그린다

   Sleep(speed); // 게임의 스피드 조절
 }
}
}


