#include <stdio.h>
int main()
{
 int num[3][3],sum=0;
 int i,j,k=1;
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("num[%d][%d]의 값을 입력하세요 : ",i,j);
   scanf("%d",&num[i][j]);
  }
 }

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("num[%d][%d] = %d\t",i,j,num[i][j]);
   if(k%3==0) printf ("\n");
   k++;
  }
 }

 for(j=0;j<3;j++)
 {
  for(i=0;i<3;i++)
  {
   sum=sum+num[i][j];
  }
  printf("%d\t\t",sum);
  sum=0;
 }

}