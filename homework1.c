#include<stdio.h>
void main()
{
    int a=5, b=7;
    printf("increment i++ =%d\n",a++);
    printf("increment ++i =%d\n",++a);
    printf("decrement j-- =%d\n",a--);
    printf("decrement --j =%d\n",--a);
    printf("(a==b) = %d\n",a==b);
    printf("(a!=b) = %d\n",a!=b);
    printf("(a--,--a) = %d\n",a--,--a);
    printf("(a>b&&a<b) = %d\n",a>b&&a<b);
    printf("(a>b||a<b) = %d\n",a>b||a<b);

}