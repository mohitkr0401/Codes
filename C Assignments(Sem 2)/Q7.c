#include <stdio.h>
int main(){
int n;
printf("enter digit:");
scanf("%d", &n);

int remainder;
int rev=0;


digit_add:
remainder=n%10;
rev=rev*10+remainder;
n/=10;

 if (n>0)
goto digit_add;
printf("%d", rev);
return 0;}
