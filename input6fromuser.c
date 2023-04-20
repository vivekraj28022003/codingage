#include<stdio.h>
int main()
{
    printf("enter interger");
    int a,b;
    scanf("%d",&a),
    scanf("%d",&b);
    int g=a+b;
    int h=a-b;
    int i=a*b;
    printf("%d+%d=%d\n",a,b,g);
    printf("%d-%d=%d\n",a,b,h);
    printf("%d*%d=%d\n",a,b,i);
    printf("enter float");
    float c,d;
    scanf("%f",&c);
    scanf("%f",&d);
    float j=c+d;
    float k=c-d;
    float l=c*d;
    printf("%f+%f=%f\n",c,d,j);
    printf("%f-%f=%f\n",c,d,k);
    printf("%f*%f=%f\n",c,d,l);
    printf("enter long");
    printf("enter float");
    long e,f;
    scanf("%li",&e);
    scanf("%li",&f);
    long m=e+f;
    long n=e-f;
    long o=e*f;
    printf("%li+%li=%li\n",e,f,m);
    printf("%li-%li=%li\n",e,f,n);
    printf("%li*%li=%li\n",e,f,o);
    return 0; 
}