#include <stdio.h>
int main()
{
    int n1;
    printf("Enter a number :");
    scanf("%d", &n1);
    int n2 = n1;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n2--);
        }
        printf("\n");
        n2=n1;
    }

}