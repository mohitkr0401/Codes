#include<stdio.h>
int main()
{
int n;
printf("Enter Year: " );
scanf("%d",& n);
if (n<=0)
    {
        printf("Enter valid Year\n Year Cannot be Negative or Zero!");
    }
else if(n%400==0)
    {
        printf("\nLeap Year!!");
    }
else if(n%100==0)
    {
        printf("\nNot a Leap Year!!");
    }
else if(n%4==0)
    {
        printf("\nLeap Year!!");
    }    
else
    {
        printf("\nNot a Leap Year");
    }
    return 0;
}