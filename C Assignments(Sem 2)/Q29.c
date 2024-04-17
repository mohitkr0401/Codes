#include <stdio.h>
int main()
{
    int x, y, i;
    printf("Enter Two Numbers:\n");
    scanf("%d%d", &x, &y);
    printf("Press 1 : Add(+)\nPress 2 : Subtract(-)\nPress 3 : Multiply(*)\nPress 4 : Division(/)\nPress 5 : Modulus(%)");
    printf("\nEnter Your Choice:");
    scanf("%d", &i);
choice:
    switch (i)
    {
    case 1:
        printf("%d + %d = %d", x, y, x + y);
        break;
    case 2:
        if (x > y)
        {
            printf("%d - %d = %d", x, y, x - y);
        }
        else
        {
            printf("%d - %d = %d", y, x, y - x);
        }

        break;
    case 3:
        printf("%d * %d = %d", x, y, x * y);
        break;
    case 4:
        if (y == 0)
        {
            printf("Infinite");
        }
        else
        {
            printf("%d / %d = %d", x, y, x / y);
        }
        break;
    case 5:
        printf("%d Modulus %d = %d", x, y, x % y);
        break;
    default:
        printf("ERROR!!\nEnter the Choice Again:");
        scanf("%d", &i);
        goto choice;
    }
}
