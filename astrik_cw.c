#include <stdio.h>
void main()
{
    int n, a,b,c,d,e,f;
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
    for(e=1;e<=n;e++)
    {
    
        for(f=e;f<n;f++)
        {
            printf(" ");
        }
        for(f=1;f<=e;f++)
        {
            printf("*");
        }
        printf("\n");
    }
}