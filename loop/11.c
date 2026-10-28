#include <stdio.h>
int main()
{
    int i =0;
    do
    {
        printf("hello -> %d\n", i);
        i++;
    } while (i<5);

    printf("outside of loop -> %d\n", i);
    return 0;
}