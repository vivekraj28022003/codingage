#include <stdio.h>
int main()
{
    char d;
    scanf("%c", &d);
    switch (d)
    {
    case 'r':
    case 'R':
        printf("stop");
        break;
    case 'y':
    case 'Y':
        printf("ready");
        break;
    case 'g':
    case 'G':
        printf("go");
        break;
    default:
        printf("invalid");   
    }
    return 0;
}