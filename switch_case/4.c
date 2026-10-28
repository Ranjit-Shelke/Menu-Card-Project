#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A' ... 'Z':
            printf("The character is an uppercase letter\n");
            break;

        case 'a' ... 'z':
            printf("The character is a lowercase letter\n");
            break;

        case '0' ... '9':
            printf("The character is a digit\n");
            break;

        default:
            printf("The character is a symbol\n");    
    }
    return 0;
}