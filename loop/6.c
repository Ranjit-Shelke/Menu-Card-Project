#include <stdio.h>
int main()
{
    int limit, i, res=1;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    for (i = 1; i <= limit; i++)
    {
        printf("%d\n", res);
        res = res * 2;
    }
    return 0;
}