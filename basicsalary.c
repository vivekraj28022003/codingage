#include<stdio.h>
void main()
{
    float bs,da,hra,ma,gs,tax,ns;
    printf("enter the number\n");
    scanf("%f\n",&bs);
    da=bs*0.3;
    printf("%f\n",da);
    hra=da*0.2;
    printf("%f\n",hra);
    ma=hra*0.1;
    printf("%f\n",ma);
    gs=(bs+da+hra+ma);
    printf("%f\n",gs);
    if(gs>30000)
    {
        tax=gs*0.2;
        printf("gross salary 1%f\n",tax);
    }
    else if ((gs>=20000)&&(gs<30000))
    {
        tax=gs*0.15;
        printf("gross salary 2%f\n",tax);
    }
    else if((gs>=15000)&&(gs<20000))
    {
        tax=gs*0.1;
        printf("gross salary 3%f\n",tax);    
    }
    else
    {
        printf("0");
    }
    ns=gs-tax;
    printf("net salary%f",ns);
}