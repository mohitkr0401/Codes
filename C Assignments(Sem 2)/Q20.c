#include <stdio.h>
#include <stdbool.h>
int prime(int);
int main()
{
   int i, num;
   bool g = true;
   printf("Please Enter Range: \n");
   scanf("%d", &num);
   while (g)
   {
      if (num >= 1)
      {
         printf("Prime Number Between 1 to %d are:\n", num);
         for (i = 1; i <= num; i++)
         {
            prime(i);
         }
         g = false;
      }
      else
      {
         printf("ERROR!!\nEnter the Value Again:");
         scanf("%d", &num);
      }
   }
}
int prime(int x)
{
   int p = 0;
   int i;
   for (i = 1; i <= x; i++)
   {
      if (x % i == 0)
      {
         p++;
      }
   }
   if (p == 2)
   {
      printf(" %d \n", x);
   }
}