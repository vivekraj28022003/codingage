#include <stdio.h>
void main()
{
    int n, k, l;
    scanf("%d", &n);
    for (k = 1; k <= n; ++k)
    {

        for (l = 1; l <= n; ++l)
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