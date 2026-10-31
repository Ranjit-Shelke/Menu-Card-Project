#include <stdio.h>
int main()
{
    int chocolates = 12; 
    int pick;
    int player = 1;

while (chocolates > 0)
{
    printf("\nRemaning chocolates is = %d\n", chocolates);

    printf("\nPlayer %d turn\n", player);
    printf("Pick a chocolate (0 - 3) : ");
    scanf("%d", &pick);
    
    if (pick < 0 || pick > 3 || pick > chocolates)
    {
        printf("Invalid choice !\nTry again!! \n");
        continue;
    }

    chocolates = chocolates - pick;

    if (chocolates == 0)
    {
        printf("\nOnly Chilly remains !\n");

        if (player == 1)
        {
            printf("Player 2 gets Chilly\n");
            printf("Player 2 LOST\nPlayer 1 WON\n");
        }
        else
        {
            printf("Player 1 gets Chilly\n");
            printf("Player 1 LOST\nPlayer 2 WON\n");
        }
        break;
    }
if (player == 1)
{
    player = 2;
}
else
{
    player = 1;
}
}
return 0;
}