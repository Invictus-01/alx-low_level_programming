#include <stdio.h>

/**
* main - prints the largest prime factor of 612852475143
* Return: 0 once successful
*/
int main(void)
{
	long long num;
	int oddprime;
	int maxprime;

	num = 612852475143;
	maxprime = 0;
	oddprime = 3;

	while (num % 2 == 0)
	{
		maxprime = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % oddprime == 0)
		{
			maxprime = oddprime;
			num = num / oddprime;
		}
	oddprime += 2;
	}
	printf("%d\n", maxprime);
	return (0);
}
