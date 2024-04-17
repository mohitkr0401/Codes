#include <stdio.h>
#include <stdbool.h>
int fibo(int *);
int main()
{
  int n;
  bool g = true;
  printf("Enter the Number of Terms: ");
  scanf("%d", &n);
  while (g)
  {
    if (n >= 1)
    {
      fibo(&n);
      g = false;
    }
    else
    {
      printf("ERROR!!\nYou have to Enter a Positive Term\n");
      printf("Enter the Number of Terms Again: ");
      scanf("%d", &n);
    }
  }
}
int fibo(int *n)
{
  int i;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d  %d  ", t1, t2);
  // print 3rd to nth terms
  for (i = 3; i <= *n; ++i)
  {
    printf("%d  ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}
