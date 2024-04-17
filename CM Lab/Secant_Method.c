#include <stdio.h>
#include <math.h>
#define e 0.001
#define f(x) (x * x) - 5
int main()
{
    int i = 0;
    float x0, x1, x2, f0, f1, f2;
    printf("Enter The Value of X0 & X1: ");
    scanf("%f %f", &x0, &x1);
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        x2 = ((x1 * f0) - (x0 * f1)) / (f0 - f1);
        f2 = f(x2);
        f0 = f1;
        f1 = f2;
        x0 = x1;
        x1 = x2;
        i++;
        printf("No. of Iterations= %d \t", i);
        printf("Root= %f \t", x2);
        printf("Value of Function= %f \n", f2);
    } while (fabs(f2) > e);
    printf("Mohit Kumar\n04076803121");
    return 0;
}