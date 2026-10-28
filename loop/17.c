#include <stdio.h>
int main()
{
    int num;
    int flag=0;

    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("This is not a prime no.");
        return 1;
    }
    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("%d is a prime number.\n",num);
    else
        printf("%d is not a prime number.\n",num);

    return 0;
}