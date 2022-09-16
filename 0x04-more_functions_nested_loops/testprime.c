#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	long c, num = 612852475143;

	for (c = 2; c <= num; c++)
	{
		if (num % c == 0)
		{
			num = num / c;
			c--;
		}
	}
	printf("%ld\n", c);

	return (0);
}
