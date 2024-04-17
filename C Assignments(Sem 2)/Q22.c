#include <stdio.h>
int main()
{
	int n;
	int digit = 0;
	int sum = 0;
	printf("Enter the Number: ");
	scanf("%d", &n);
	loop:do
	{
		sum = sum + n % 10;
		n = n / 10;
		digit++;

	} 
	while (n != 0);
	if (digit >= 3)
	{
		printf("The Sum is: %d", sum);
	}
	else
	{
		printf("The number Should be More than Equal to Three Digit--\n");
		printf("Enter the Number Again:");
		scanf("%d", &n);
		digit = 0;
		sum = 0;
		goto loop;
	}
}