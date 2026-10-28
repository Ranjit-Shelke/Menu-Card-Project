#include <stdio.h>
int main()
{
    int limit, i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    for (i = 1; i <= limit; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}