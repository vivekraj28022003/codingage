#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter the number:-");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}