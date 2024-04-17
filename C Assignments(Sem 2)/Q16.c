#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter an Alphabet or a Digit: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122 || ch >= 48 && ch <= 57)
    {
        printf("The ASCII Value of %c is %d", ch, ch);
    }
    else if (ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
    {
        printf("ERROR!!\nYou have Entered a Special Character");
    }
    else
    {
        printf("ERROR!!\nEntered Character is not an Alphabet or a Digit");
    }
    getch();
}