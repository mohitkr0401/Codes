#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter a Character to Change its Case: ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        ch=ch+32;
        printf("%c is the Lowercase of the Entered Alphabet",ch);
    }
    else if (ch>= 97 && ch<=122)
    {
        ch=ch-32;
        printf("%c is the Uppercase of the Entered Alphabet",ch);
    }
    else
    {
        printf("The Entered Character is not an Alphabet");
    }
    getch();
}