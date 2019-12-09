#include <stdio.h>
int main()
{
    int i, j;
    scanf("%x", &i);

    for (int j=1; j<16; j++) 
    {
        printf("%X*%X=%X\n", i, j, i*j);
    }
    
    return 0;
}
