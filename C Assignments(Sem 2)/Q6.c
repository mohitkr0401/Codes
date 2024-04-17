#include <stdio.h>

int main(){


int n;
printf("enter digit:");
scanf("%d", &n);
if (n==0){
  printf ("enter value greater than 0 only");
}
else 
{
int remainder;
int sum=0;

digit_add:
remainder=n%10;
sum+=remainder;
n/=10;
if (n>0)
goto digit_add;
printf("%d", sum);
return 0;
}
}