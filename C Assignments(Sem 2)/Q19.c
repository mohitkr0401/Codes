#include <stdio.h>
#include <stdbool.h>
int main()
{
    int base, exp, res = 1;
    bool go = true;
    printf("Enter Base Number:");
    scanf("%d", &base);
    printf("Enter Exponent:");
    scanf("%d", &exp);
    while (go)
    {
        if (exp >= 1)
        {
            for (int i = 1; i <= exp; i++)
            {
                res *= base;
            }
            printf("%d Raise to Power %d is:%d", base, exp, res);
            go = false;
        }
        else
        {
            printf("You have to Enter Positive Exponent Number !!!");
            printf("\nEnter a Positive Exponent Number:");
            scanf("%d", &exp);
        }
    }
}