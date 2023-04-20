#include<stdio.h>
void main()
{
    int n,m,i,j;
    scanf("%d",&n);//row
    scanf("%d",&m);//column
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=m;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}