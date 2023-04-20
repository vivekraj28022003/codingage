#include<stdio.h>
void main()
{
    int a[10];
    int i;
    printf("enter the number\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d\n", a[i]+1);
        }
        else
        {
            printf("%d\n", a[i]+2);
        }
       
    }
}