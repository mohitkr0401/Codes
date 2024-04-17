#include <stdio.h>
int fact(int);
int main()
{
    int i;
    printf("Enter Positive Number:");
    scanf("%d", &i);
    printf("Factorial is:%d", fact(i));
}
int fact(int x)
{
    if (x > 1)
    {
        return x * fact(x - 1);
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        printf("ERROR!!\nEnter Positive Number Only:");
        scanf("%d", &x);
        return fact(x);
    }
}