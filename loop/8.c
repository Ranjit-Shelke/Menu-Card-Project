#include <stdio.h>
int main()
{
    int i, limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    i=limit;
    while (i > 0)
    {
        printf("%d\n", i);
        i=i-2;
    }
    return 0;
}