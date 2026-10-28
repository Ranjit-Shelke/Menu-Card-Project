#include <stdio.h>
int main()
{
    int opr;
    int prize=0;
    int total=0;
    printf("-----------Welcome to the Cafe!---------------\n");
    do
    { 
    printf("1. Coffee   - Rs 25\n");
    printf("2. Tea      - Rs 15\n");
    printf("3. Juice    - Rs 40\n");  
    printf("4. Pizza    - Rs 99\n");
    printf("5. Exit\n");  
    printf("Enter your choice : ");
    scanf("%d", &opr);

    switch (opr)
    {
        case 1:
            printf("You have selected Coffee\n");
            prize = 25;
            break;
        case 2:
            printf("You have selected Tea\n");
            prize = 15;
            break;
        case 3:
            printf("You have selected Juice\n");
            prize = 40;
            break;
        case 4:
            printf("You have selected Pizza\n");
            prize = 99;
            break;
        case 5:
            printf("You have selected Exit\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    if(opr>=1 && opr<=4)
    {
        total += prize;
        printf("Current Amount is: Rs - %d\n", total);
    }
    } while (opr != 5);
    printf("Total amount to be paid: Rs %d\n", total);
    printf("Thank you for visiting the Cafe!\n");
    return 0;
}