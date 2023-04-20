#include <stdio.h>
void main()
{
    int n, a,b,c,d;
    scanf("%d", &n);
    for (a = 0; a <= n/2; a++)
    {
        for (b= 0; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (c = n/2; c >= 1; c--)
    {
        for (d = 1; d <= c; d++)
        {
            printf("*");
        }
        printf("\n");
    }
}