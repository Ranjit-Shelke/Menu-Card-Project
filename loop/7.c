#include <stdio.h>
int main()
{
    int n1, n2, sum = 0, i;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    for (i = 0; i < n1; i++)
    {
        sum = sum + n2;    
    }
    printf("sum = %d\n", sum);
    return 0;
}