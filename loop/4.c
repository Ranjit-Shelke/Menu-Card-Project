#include <stdio.h>
int main()  
{
    int limit, i;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit % 2 == 0)
    {
        limit--;
    }    

    for (i = limit; i > 0; i=i-2)
    {
        printf("%d\n", i);
    }
    return 0;
}
