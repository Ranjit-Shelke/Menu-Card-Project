#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers:");
    scanf("%d%d", &n1, &n2);
    int sum = n1 + n2;
    int pro = n1 * n2;
    printf("Sum is: %d\n", sum);
    printf("Product is: %d\n", pro);
    return 0;
}

