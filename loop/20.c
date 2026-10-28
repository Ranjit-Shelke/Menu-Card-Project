#include <stdio.h>
int main()
{
    int size, i, j;
    int n=1;

    printf("Enter a size : ");
    scanf("%d", &size);
    
    for(i=1; i<=size; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
return 0;

}