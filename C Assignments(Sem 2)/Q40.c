#include <stdio.h>
#include <conio.h>
float area(float radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    float radius;
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);
    printf("The Area is: %f", area(radius));
    getch();
    return 0;
}
