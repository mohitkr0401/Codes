#include <stdio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)
int main()
{
    float a, b, m = 0.0, stepsize, k, p, l;
    int i, n;
    printf("Enter the Lower and Upper Limit respectively : ");
    scanf("%f%f", &a, &b);
    printf("Enter Number of Sub-Intervals : ");
    scanf("%d", &n);
    stepsize = (b - a) / n;
    p = (f(a) + f(b))/ 2;
    for (i = 1; i <= n - 1; i++)
    {
        k = a + i * stepsize;
        m = m + f(k);
    }
    l = stepsize * (p + m);
    printf("Value of the Integration is = %f\n", l);
    printf("\nMohit Kumar\n04076803121");
    return 0;
}