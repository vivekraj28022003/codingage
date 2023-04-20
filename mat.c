#include <stdio.h>
void main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k, l, m, n;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n enter the row %d and %d", i + 1, j + 1);
            scanf("%d\n", &mat1[i][j]);
        }
    }
    printf("enter the 1matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            printf("\n enter the row %d and %d", k + 1, l + 1);
            scanf("%d\n", &mat2[k][l]);
        }
    }
    printf("enter the 2matrix\n");
    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            printf("%d\t", mat2[k][l]);
        }
        printf("\n");
    }
    printf("sum of matrix\n");
    for (m = 0; m < 3; m++)
    {
        for (n = 0; n < 3; n++)
        {
            mat3[m][n] = 0;
            mat3[m][n] = mat3[m][n] + (mat1[i][j] * mat2[k][l]);
            printf("%d\t", mat3[m][n]);
        }
        printf("\n");
    }
}