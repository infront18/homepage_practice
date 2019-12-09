#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("알파벳을 입력하세요 : ");
    a=getchar();

    if(a<'a' && a>='A')
    {
	    a=a+32;
 	    putchar(a);
    }

    else if(a<='z' && a>='a')
    {
	    a=a-32;
	    putchar(a);
    }
    else
	    printf("알파벳을 입력하세요\n");

    system("pause");
    return 0;
}


