#include <stdio.h>
void main()
{
    int n, i, j, k, l;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (k = 1; k <= n; k++)
    {

        for (l = 1; l <= n; l++)
        {
            if ((k + l) <= n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}