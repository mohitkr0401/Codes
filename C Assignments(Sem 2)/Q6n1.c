#include <stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the Number: ");
scanf("%d", &a);
if (a==0)
{
  printf("ERROR!! Invalid Value");
}
else 
{
    b=a/100;
    c=a%10;
    a=(a/10)%10;
    d=a+b+c;
    printf("%d",d);
    return 0;
}
}