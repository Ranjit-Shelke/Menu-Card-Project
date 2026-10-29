/*
Name: Ranjit Shelke
Date: 29/10/2026
Description: Menu Card
*/

#include <stdio.h>
int main()
{
    int choice, total = 0;
    int coffee = 0, tea = 0, juice = 0, pizza = 0;
    int payment;

    printf("-----------Welcome to the Cafe!---------------\n");
    do
    { 
    printf("1. Coffee   - Rs 25\n");
    printf("2. Tea      - Rs 15\n");
    printf("3. Juice    - Rs 40\n");  
    printf("4. Pizza    - Rs 99\n");
    printf("5. Exit\n");  
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            coffee++;
            total = total + 25;
            printf("You have selected Coffee\n");
            break;
        case 2:
            tea++;
            total = total + 15;
            printf("You have selected Tea\n");
            break;
        case 3:
            juice++;
            total = total + 40;
            printf("You have selected Juice\n");
            break;
        case 4:
            pizza++;
            total = total + 99;
            printf("You have selected Pizza\n");
            break;
        case 5:
            printf("\n------ YOUR BILL ------\n");

            if(coffee > 0)
            printf("Coffee x %d = Rs %d\n", coffee, coffee * 25);

            if(tea > 0)
            printf("Tea x %d = Rs %d\n", tea, tea * 15);

            if(juice > 0)
            printf("Juice x %d = Rs %d\n", juice, juice * 40);

            if(pizza>0)
            printf("Pizza x %d = Rs %d\n", pizza, pizza * 99);

            printf("----------------------\n");
            printf("Total Bill = Rs %d\n\n", total);

            if(total == 0)
            {
                printf("No items selected!\n");
                    break;
            }
            
            do
            {
                printf("Please Select a Payment Method :\n1. UPI\n2. Cash\n");
                scanf("%d", &payment);

                switch (payment)
                {
                case 1: printf("You Select UPI\n");
                    break;
                case 2: printf("You Select Cash\n");
                    break;
                
                default: printf("select a valid option\n");
                    break;
                }
            } while (payment != 1 && payment != 2);
            
                printf("Thank you! Visit Again.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}