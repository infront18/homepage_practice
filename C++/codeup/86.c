#include <stdio.h>

int main()
{
    int r, g, b; 
    double result;
    scanf("%d %d %d", &r, &g, &b);

    result = r * g * b / 8;
    result = result / 1024;
    result = result / 1024;

    printf("%.2f MB", result);
    return 0;
}

