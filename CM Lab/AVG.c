#include <stdio.h>
int main()
{
    int n, a, i, sum = 0;
    float avg = 0;
    printf("Enter Total Numbers to be Calculated: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &a);
        sum += a;
    }
    avg = sum / n;
    printf("Average of Numbers= %f", avg);
    printf("\nMohit Kumar\n04076803121");
    return 0;
}