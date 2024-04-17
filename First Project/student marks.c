#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Enter the Marks of 5 Subjests of a Student");
    float e,m,s,ss,h,tot,per;
    printf("Enter Mathematics Marks = ");
    scanf("%f",&m);
    printf("Enter Social Science Marks = ");
    scanf("%f",&ss);
    printf("Enter Science Marks = ");
    scanf("%f",&s);
    printf("Enter Hindi Marks = ");
    scanf("%f",&h);
    printf("Enter English Marks = ");
    scanf("%f",&e);
    if((0=<m=<100)||(0=<ss=<100)||(0=<s=<100)||(0=<h=<100)||(0=<e<=100))
        {
            tot=m+s+ss+h+e;
            per=(tot*100)/500;
            printf("The Total Marks Scored by the Student is %f",tot);
            printf("The Percentage of the Student is %f",per);
        }
    else
        {
            printf("You Entered Invalis Marks");
        }   
}