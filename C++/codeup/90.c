#include <stdio.h> 

int main()
{
    int a, r, n, i;
    scanf("%d %d %d", &a, &r, &n);
    
    for (i = 1; i < n; i++)
    {
        a *= r;
    }
    printf("%d", a);
}
