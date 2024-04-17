#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Negative");
    }
    else if (n > 0)
    {
        printf("Positive");
    }
    else if (n == 0)
    {
        printf("Neutral(Zero)");
    }
    return 0;
}