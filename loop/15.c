#include <stdio.h>
int main()
{
    goto label;

    if(0)
    {
        label:
        printf("Hello\n");
    }
    return 0;
}