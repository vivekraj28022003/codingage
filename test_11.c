#include<stdio.h>
void main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        if (i%2!=0)
        {
            printf("%d coding\n",i);
        }
        else
        {
        printf("%d age\n",i);
        }
        i++;    
    }
}