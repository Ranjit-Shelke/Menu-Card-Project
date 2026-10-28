#include <stdio.h>
int main() 
{
    char ch;
    int num;
    float fnum;
    double dnum;

    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter a float value : ");
    scanf("%f", &fnum);
    printf("Enter a double value : ");
    scanf("%lf", &dnum);

    printf("%d %c %f %lf", num, ch, fnum, dnum);
    return 0;
}