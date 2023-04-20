#include<stdio.h>
int main()
{
    int i=9;
    while(i<=13)
    {
        if(i%2==0)
        {
            printf("%d yocoder\n",i);
        }
        else
        {
            printf("%d upcoder\n",i);
        }
        i++;
    }
    return 0;
}