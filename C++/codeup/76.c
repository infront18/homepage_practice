#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    for(int i=97; i<=(int)a; i++){
        printf("%c ", i);
    }

    return 0;
}