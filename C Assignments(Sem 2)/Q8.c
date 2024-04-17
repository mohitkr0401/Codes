#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("\nEnter the Number: ");
    scanf("%d", &n);
    if (n <= 0 || n == 0)
    {
        printf("\nEnter Number Greater than Zero");
    }
    else if (n % 2 == 0)
    {
        printf("\nEVEN: %d", n);
    }
    else
    {
        printf("\nODD:%d", n);
    }
    return 0;
}