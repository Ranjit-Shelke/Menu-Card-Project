#include <stdio.h>
int main()
{
    int amount;
    printf("Enter the amount : ");
    scanf("%d", &amount);
    if(amount<=90)
    {
    printf("Door is closed ");
    }
    else
    {
    printf("Door is open ");
    }
    return 0;
}