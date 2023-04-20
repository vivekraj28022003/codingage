#include<stdio.h>
int sumOfTwoNumber(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    int c= sumOfTwoNumber(a,b);
    printf("%d+%d=%d",a,b,c);
    return 0;
}