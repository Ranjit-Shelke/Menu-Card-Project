#include <stdio.h>
int main()
{
    int num;
    int temp;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num>0)
    {
        rev = num%10 + rev*10;
        num = num/10;
    }
    if (temp == rev)
    {
        printf("%d is a palindrome number\n", temp);
    }
    else
    {
        printf("%d is not a palindrome number\n", temp);
    }
    return 0;
}