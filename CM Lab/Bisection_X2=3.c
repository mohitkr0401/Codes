#include <stdio.h>
#include <math.h>
#define e 0.001
#define f(x) (x * x) - 3
int main()
{
    float x0, x1, x2, f0, f1, f2;
    int i = 0;
    printf("Enter the value of x0 and x1");
    scanf("%f %f", &x0, &x1);
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        x2 = (x0 + x1) / 2;
        f2 = f(x2);
        if (f0 * f2 < 0)
        {
            x1 = x2;
        }
        else
        {
            x0 = x2;
        }
        i++;
        printf("Number of Iterations=%d \t", i);
        printf("Value of Function=%f \t", f2);
        printf("Root=%f \n", x2);
    } while (fabs(f2) > e);
    printf("Mohit Kumar\n04076803121");
    return 0;
}