#include <stdio.h>
int main()
{
    int n1, n2;
    char op;
    printf("Enter the expression : ");
    scanf("%d %c %d", &n1, &op, &n2);

    if (op == '/' && n2 == 0)
    {
        printf("Division by zero is not allowed\n");
        return 1;
    }
    
    switch (op)
    {
        case '+':
            printf("Addition is %d\n", n1 + n2);
            break;
        case '-':
            printf("Subtraction is %d\n", n1 - n2);
            break;
        case '*':
            printf("Multiplication is %d\n", n1 * n2);
            break;
        case '/':
        if (n2 == 0)
            {
                printf("Division by zero is not allowed\n");
                break;
            } 
        else      
            printf("Division is %g\n", (double)n1 / n2);
            break;
        default:
            printf("Invalid operator\n ");
    }
    return 0;
}