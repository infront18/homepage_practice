#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
    int num;
    int com;
    int comwin=0;
    int win=0;
    int zim=0;
 
    while(comwin==0)
    {
        printf("바위1, 가위2, 보3 :");
        scanf("%d",&num);
 
        srand((int)time(NULL));
        com=rand()%4;
 
        com=com+1;
 
        if(com==num)
        {
            printf("비겼습니다.\n");
        }
        else if((com+num)%2==0)
        {
            if(com>num)
            {
                printf("컴퓨터가 %d,당신이 %d 컴퓨터가 이겼습니다.\n",com,num);
                comwin=1;
                zim++;
            }
            else
            {
                printf("컴퓨터가 %d,당신이 %d 당신이 이겼습니다.\n",com,num);
                win++;
            }            
        }
        else if((com+num)%2==1)
        {
            if(com>num)
            {
                printf("컴퓨터가 %d,당신이 %d 당신이 이겼습니다.\n",com,num);
                win++;
            }
            else
            {
                printf("컴퓨터가 %d,당신이 %d 컴퓨터가 이겼습니다.\n",com,num);
                comwin=1;
                zim++;
            }                    
        }
        
    }
    
    printf("%d승 %d패",win,zim);
}
 