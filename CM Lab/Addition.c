#include <stdio.h>
int main()
{
    int n, a, i, sum = 0;
    printf("Enter Total Numbers to be Added: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &a);
        sum += a;
    }

    printf("Sum of Numbers= %d", sum);
    printf("\nMohit Kumar\n04076803121");
    return 0;
    
}