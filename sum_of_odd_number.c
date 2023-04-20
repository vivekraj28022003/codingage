#include<stdio.h>
int main()
{
    int a,i=1,sum=0;
    scanf("%d",&a);
    while(i<=a)
    {
        if (i%2!=0)
        {
            sum=sum+i;
        }
        i++;
        printf("%d",sum);
    }
    return 0;
}


