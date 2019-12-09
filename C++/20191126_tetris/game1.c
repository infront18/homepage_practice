#include<stdio.h>
#include<Windows.h>
#include<conio.h> 

void gotoxy(int x, int y){ 
 COORD pos;
 pos.X = x; pos.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(int argc, char *argv[]){
    COORD pos={0,0};
    int ch;
    int i,j;
    for(i=0;i<10;i++){ //맵세팅
        for(j=0;j<10;j++){
            printf("☆");
        }
        printf("\n");
    }
    gotoxy(pos.X,pos.Y); //game 시작지점
    printf("★");
    
    while(1){
        
        if(kbhit()){
            ch=getch();
/*          switch(ch){
                case 97:printf("왼쪽 %c\n",ch); break; 
                case 100:printf("오른쪽 %c\n",ch); break;
                case 119:printf("위쪽 %c\n",ch); break;
                case 115:printf("아래쪽 %c\n",ch); break;
            }
*/
            gotoxy(pos.X,pos.Y); //루프 이전 이동 좌표 초기화
            printf(" ");

            switch(ch){
                case 97:pos.X-=2; break; 
                case 100:pos.X+=2; break;
                case 119:pos.Y-=1; break;
                case 115:pos.Y+=1; break;
            }
            if(pos.X<0)pos.X=0;
            else if(pos.X>20)pos.X=20;
            if(pos.Y<0)pos.Y=0;
            else if(pos.Y>10)pos.Y=10;
        
            gotoxy(pos.X,pos.Y); //새로운 이동 좌표 지정
            printf("★");                                    
        }   
    }
    return 0;
}
