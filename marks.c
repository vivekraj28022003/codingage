#include<stdio.h>
int main()
{
float marks,totalm ,percent;
    scanf("%f",&marks);
    totalm=20;
    percent=(marks/totalm)*100;
    printf ("%f",percent);
    if (percent==100)
    {
        printf("outstanding");
    }
    else if ("percent>80 && percent<100")
    {
       printf("good");
    }
    else if ("percent>70 && percent <20")
    {
      printf("work hard");
    }
    else 
     printf ("nalayak");
    return 0;
}   