
#include <stdio.h>
int main()
{
  float f, c;
  int ch;
  printf("=====MENU=====");
  printf("\n 1. Convert F to C");
  printf("\n 2. Convert C to F \n");
  scanf("%d", &ch);
  if (ch == 1)
  {
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 0.556;
    printf("The Temperature in Celsius is: %f", c);
  }
  else if (ch == 2)
  {
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("The Temperature in Fahrenheit is: %f", f);
  }
  else
  {
    printf("ERROR!! Invalid Choice");
  }
  return 0;
}