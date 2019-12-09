#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d", &i);
    
    for (j=1; j <= i; j++) 
    {
        if (j % 3 == 0) {
            printf("X ");
        }
        else {
            printf("%d ", j);
        }
    }
    return 0;
}
