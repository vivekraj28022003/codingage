#include <stdio.h>
int main()
{
    char v;
    scanf("%c", &v);
    switch (v)
    {
    case 'a':
    case 'A':
        printf("VOWEL");
        break;
    case 'e':
    case 'E':
        printf("VOWEL");
        break;
    case 'i':
    case 'I':
        printf("VOWEL");
        break;
    case 'o':
    case 'O':
        printf("VOWEL");
        break;
    case 'u':
    case 'U':
        printf("VOWEL");
        break;
    default:
        printf("CONSONENT");
    }
    return 0;
}
