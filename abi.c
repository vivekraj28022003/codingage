#include<stdio.h>
int main () {
    printf("ENTER THE INITIAL OF YOUR NAME\n") ;
    char a ;
    char b ;
    char c ;
    scanf("%c",&a) ;
    scanf(" %c",&b) ;
    scanf(" %c",&c) ;
    printf("NOW PLEASE ENTER YOUR MARKS\n") ;
    int d ;
    int e ;
    int f ;
    scanf("%d",&d) ;
    scanf("%d",&e) ;
    scanf("%d",&f) ;
    printf("marks of %c is %d\n",a,d);
    printf("marks of %c is %d\n",b,e);
    printf("marks of %c is %d\n",c,f);
    return 0 ;
    
}