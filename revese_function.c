#include <stdio.h>
int reverseNumber(int n, int rem, int rev)
{
    while (n != 0)
    {
        return rem = n % 10;
        return  rev = (rev * 10) + rem;
        return n   = n / 10;
        return ("%d", rev);
    }
}
void main()
{
    int n, rem, rev, b;
    printf("enter the number\n");
    scanf ("%d", &n);
    b = reverseNumber(n, rem, rev);
    printf("%d", b);
}