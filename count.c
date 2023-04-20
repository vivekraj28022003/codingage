#include <stdio.h>
void main()
{
    int n, i, j, k = 1;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            //printf("");
            k++;
            if(k%2!=0)
            {
                printf("o");
            }
            else
            {
                printf("e");
            }
        }
        printf("\n");
    }
}