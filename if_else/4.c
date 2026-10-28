#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks < 0||marks>100)
    {
        printf("Invalid input\n.");
        return 1;
    }
    else
    {
        printf("The grade is: ");
    }
    if (marks>=85&&marks<=100)
    {
        printf("grade A.");
    }
    else if (marks>=75&&marks<85)
    {
        printf("grade B.");
    }
    else if (marks>=60&&marks<75    )
    {
        printf("grade C.");
    }
    else if (marks>=0&&marks<59)
    {
        printf("grade D.");
    }
    else
    {
        printf("Fail.");
    }
    
}