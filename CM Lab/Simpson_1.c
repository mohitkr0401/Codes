#include <stdio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)
int main()
{
    float a, b, l = 0.0, stepsize, k;
    int i, n;
    printf("Enter Lower & Upper Limits of Integration: ");
    scanf("%f%f", &a, &b);
    printf("Enter Number of Sub Intervals: ");
    scanf("%d", &n);
    stepsize = (b - a) / n;
    l = f(a) + f(b);
    for (i = l; i <= n - 1; i++)
    {
        k = a + i * stepsize;
        if (i % 2 == 0)
        {
            l = l + 2 * f(k);
        }
        else
        {
            l = l + 4 * f(k);
        }
    }
    l = l * stepsize / 3;
    printf("\nRequired Value of Integration is: %f", l);
    printf("\nMohit Kumar\n04076803121");
    return 0;
}