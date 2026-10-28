#include<stdio.h>
int main()
{
    char dir;
    printf("Enter the direction : ");
    scanf("%c", &dir);

    switch(dir)
    {
        case 'N':
        case 'n':
            printf("North direction\n");
            break;

        case 'S':
        case 's':
            printf("South direction\n");
            break;

        case 'E':
        case 'e':
            printf("East direction\n");
            break;

        case 'W':
        case 'w':
            printf("West direction\n");
            break;

        default:
            printf("Invalid direction\n");
    }
}