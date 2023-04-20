/*write to take a number and return 0.
if it is prime ,return 1 if it is even and 2 if it is odd*/

#include <stdio.h>
int checkNumber(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else if (n % 2 != 0)
    {
        return 2;
    }
}
// function to check prime number//
int checkPrime(int n)
{
    int c = 2;
    while (c < n)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        break;
        c++;
        if (n == c)
        {
            return 1;
        }
    }
}
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("even odd \n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 || a[i] % 2 != 0)
        {
            int d = checkNumber(a[i]);
            printf("%d", d);
        }
        printf("prime number");
        for (int i = 0; i < n; i++)
        {
            int d = checkPrime(a[i]);
            printf("%d", d);
        }
        return 0;
    }
}