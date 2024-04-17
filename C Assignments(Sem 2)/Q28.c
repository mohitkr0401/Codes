#include <stdio.h>
#include <conio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int x, n;
    float series = 0;
    do
    {
        printf("Enter a Number: ");
        scanf("%d", &x);
    } 
    while (x == 0);
    do
    {
        printf("Enter Series End: ");
        scanf("%d", &n);
    } 
    while (n < 0 );
    for (int i = 0; i <= n; i++)
    {
        series = series + x / factorial(i);
        i++;
    }
    printf("The sum is: %f", series);
    getch();
    return 0;
}