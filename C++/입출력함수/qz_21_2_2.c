#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    char total[300];
    int i;

    fputs("3개의 문자열 입력 : ", stdout); 
    scanf("%s %s %s",str1,str2,str3);

    if(strcmp(str1,str2)>0) // str1 > str2
    {
     if(strcmp(str2,str3)>0) // str2 > str3
     {
      strcpy(total,str1);
      strcat(total,str2);
      strcat(total,str3);
     }
     else if(str1,str3>0) // str1 > str3 > str2
     {
      strcpy(total,str1);
      strcat(total,str3);
      strcat(total,str2);
     }
     else // str3 > str1 > str2
     {
      strcpy(total, str3);
      strcat(total, str1);
      strcat(total, str2);
     }
    }
    else if(strcmp(str2,str3)>0) // str2 > str1 && str2 > str3
    {
     if(strcmp(str1,str3)>0) // str2 > str1 > str3
     {
      strcpy(total,str2);
      strcat(total,str1);
      strcat(total,str3);
     }
     else // str2 > str3 > str1
     {
      strcpy(total,str2);
      strcat(total,str3);
      strcat(total,str1);
     }
    }
    else // str3 > str 2 > str1
    {
     strcpy(total, str3);
     strcat(total, str2);
     strcat(total, str1);
    }
    puts(total);
   
    system("pause");
}



