#include <stdio.h>

int main()
{
    int sum=0;

    for (int i = 0; i <= 1000; i++)
        if (i % 3 == 0 || i % 5 == 0)       
            sum += i;       
    printf("3 또는 5의 배수 합은: %d", sum);
    
    return 0;
}