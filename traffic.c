#include<stdio.h>
int main()
{
    char d;
    scanf("%c",&d);
    if(d=='r')
    {
        printf("stop");
    }
    else if (d=='g')
    {
        printf("go");
    }
    else if (d=='y')
    {
        printf("ready");
    }
    else
    {
    printf("nothing");
    }
    return 0;
}   