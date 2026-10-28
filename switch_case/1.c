#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);

    switch(num)
    {
        default:
        printf("Invalide input\n");
        break;

    case 20:
        printf("The number is 20\n");
        break;

    case 30:
        printf("The number is 30\n");
        break;
        
    case 10:
        printf("The number is 10\n");
        break;    
    }
}