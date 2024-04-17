#include <stdio.h>
#include <math.h>
#define e 0.00001
#define f(x) 3 * x - cos(x) - 1
#define df(x) 3 + sin(x)
int main()
{
    float x1, x0, f0, f1, df0;
    int i = 0;
    printf("Enter the Value of X0 = ");
    scanf("%f", &x0);
    do
    {
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - (f0 / df0);
        f1 = f(x1);
        x0 = x1;
        i++;
        printf("Number of Iterations = %d \t", i);
        printf("Root = %f \t", x1);
        printf("Value of Function = %f \n", f1);
    } while (fabs(f1) > e);
    printf("Mohit Kumar\n04076803121");
    return 0;
}