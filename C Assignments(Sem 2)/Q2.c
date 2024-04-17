#include <stdio.h>
int main()
{
    int p, r, t, Si;
    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Rate of Interest: ");
    scanf("%d", &r);
    printf("Enter Period of Time: ");
    scanf("%d", &t);
    if (p > 0 & r > 0 & t > 0)
    {
        Si = (p * r * t) / 100;
        printf("Simple Interest: %d", Si);
    }
    else
    {
        printf("ERROR!! You Entered Invalid Value");
    }
    getchar();
    return 0;
}