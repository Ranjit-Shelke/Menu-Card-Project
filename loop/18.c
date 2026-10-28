#include <stdio.h>
int main()
{
    int size, line, i, j;
    char ch;

    printf("Enter the charactor : ");
    scanf("%c", &ch);


    printf("Enter a lines : ");
    scanf("%d", &line);

    printf("Enter a size : ");
    scanf("%d", &size);
    
    for(i=1; i<=line; i++)
    {
        for(j=1; j<=size; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
return 0;

}