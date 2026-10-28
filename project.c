#include <stdio.h>
int main()
{
    int opr;
    int prize=0;
    int total=0;
    int count=0;

    int prizes[100];
    char *items[100];
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
            if (count < 100) 
            {
                items[count] = "Coffee";
            }
            break;
        case 2:
            printf("You have selected Tea\n");
            prize = 15;
            if (count < 100) 
            {
                items[count] = "Tea";
            }
            break;
        case 3:
            printf("You have selected Juice\n");
            prize = 40;
            if (count < 100) 
            {
                items[count] = "Juice";
            }
            break;
        case 4:
            printf("You have selected Pizza\n");
            prize = 99;
            if (count < 100) 
            {
                items[count] = "Pizza";
            }
            break;
        case 5:
            printf("You have selected Exit\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    if(opr>=1 && opr<=4)
    {
        if (count < 100) 
        {
            prizes[count] = prize;
            count++;
            total += prize;
        }
        else
        {
            printf("Maximum item limit reached. Cannot add more items.\n");
        }
    }
    } while (opr != 5);
    printf("\n--------- YOUR ORDER ---------\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s - Rs %d\n", items[i], prizes[i]);
    }
    printf("\n--------- YOUR ORDER ---------\n");
    printf("Total amount to be paid: Rs %d\n", total);
    printf("Thank you for visiting the Cafe!\n");
    return 0;
}