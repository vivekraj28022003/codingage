#include <stdio.h>
void main()
{
    int a[10];
    printf("enter the number");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}