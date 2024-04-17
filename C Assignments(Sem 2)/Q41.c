#include <stdio.h>
#include <conio.h>
int factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("The Factorial is: %d", factorial(num));
    getch();
    return 0;
}
