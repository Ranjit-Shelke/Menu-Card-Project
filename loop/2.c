#include <stdio.h>
int main()
{
    int limit, i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    for (i = limit; i > 0; i--) // i>=1;
    {
        printf("%d\n", i);
    }
    return 0;
}