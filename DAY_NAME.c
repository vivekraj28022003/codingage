#include <stdio.h>
void main()
{
    printf("Enter The Day You LIKE\n");
    int day ,ascii;
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("monday");
        break;

    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("wednesday");
        break;

    case 4:
        printf("thusday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("saturday");
        break;

    case 7:
        printf("sunday");
        break;

    case 8 :
        ascii>=36 && ascii<=126;
        printf("enter chossen value");
        break;

    default:
        printf("invalid input");
    }
}