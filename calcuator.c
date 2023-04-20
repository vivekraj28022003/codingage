#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    switch(a,b)
    {
        case1:
        printf("%d+%d",a+b);
        break;

        case2:
        printf("%d-%d",a-b);
        break;
    }
}