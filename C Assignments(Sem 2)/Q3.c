#include<stdio.h>
int main ()
{
int x, y, area, perimeter;
printf("Enter the Value of Length: ");
scanf("%d",&x);
printf("Enter the Value of Breadth: ");
scanf("%d",&y);
if (x>0 & y>0 )
{
    area=x*y;
    printf("Area:%d",area);
    perimeter=2*(x+y);
    printf("\nPerimeter:%d",perimeter);
    return 0;
}
else
{
    printf("ERROR!! You have Entered Invalid Value");
}
}