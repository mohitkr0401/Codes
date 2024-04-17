#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("First Number is Greatest: %d",a);
    }
    else if (b > a && b > c)
    {
        printf("Second Number is Greatest: %d",b);
    }
    else if (c > a && c > b)
    {
        printf("Third Number is Greatest: %d",c);
    }
    else if (a==b || b==c || c==a)
    {
        printf("ERROR!!\nTwo or More Numbers are Equal\nEnter Different Values");
    }
    return 0;
}