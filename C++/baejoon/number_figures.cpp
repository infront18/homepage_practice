#include <stdio.h>

int main(){
	int a,b,c;
	int x;
    char num[10]={0,};  //배열 초기화

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    x=a*b*c;

    while(x>0){
    	num[x%10]++;
    	x=x/10;
    }
    for(int i=0; i<10; i++) {
    	printf("%d\n",num[i]);
    }
    
}