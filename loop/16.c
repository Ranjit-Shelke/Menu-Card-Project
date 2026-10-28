#include <stdio.h>
int main()
{
    int limit, i=1;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    label:
    printf("%d\n", i++);

    if (i<=limit)
        goto label;

    return 0;
}