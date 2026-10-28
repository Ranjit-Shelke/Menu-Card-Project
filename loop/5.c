#include <stdio.h>
int main()
{
    int i, limit, sum= 0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d natural numbers is %d\n", limit, sum);

    float avg = (float) sum / limit;
    printf("Average of %d natural numbers is %f\n", limit, avg);
    return 0;
}