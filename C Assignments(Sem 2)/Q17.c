#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter a Decimal Number: ");
    scanf("%d", &num);
    int n = num;
    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("The Binary Number of %d is: ", num);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\nHexadecimal Number is: %x", num);
    printf("\nOctal Number is: %o", num);
    getch();
    return 0;
}