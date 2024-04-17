#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter a  Character: ");
    scanf("%c", &ch);
    if (ch > 65 && ch <= 90)
    {
        printf("%c is Upper Case Alphabet ", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is Lower Case Alphabet ", ch);
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("%c is Numeric Value ", ch);
    }
    else if (ch == 32)
    {
        printf("%c is Space", ch);
    }
    else
    {
        printf("%c is Special Character ", ch);
    }
    getch();
}