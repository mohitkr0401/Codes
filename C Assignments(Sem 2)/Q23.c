#include <stdio.h>
int main()
{
    int i = 1;
    int x;
    int sum = 0;
    float avg = 0;
    while (i <= 10)
    {
        printf("Enter the Number:");
        scanf("%d", &x);
        sum += x;
        i++;
    }
    avg = sum / 10;
    printf("Sum of 10 Numbers is  :%d\n", sum);
    printf("Average of 10 Numbers is  :%.2f", avg);
}