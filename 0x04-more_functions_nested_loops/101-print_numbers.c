#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	long a; /* power of 10 */
	int b; /* boolean check */
	long num; /* convert int to long */

	num = n;
	/* negative integers */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* counting up */
	a = 1;
	b = 1;
	while (b)
	{
		if (num / (a * 10) > 0)
			a *= 10;
		else
			b = 0;
	}

	/* counting down */
	while (num >= 0)
	{
		if (a == 1)
		{
			_putchar((num % 10) + '0');
			num = -1;
		}
		else
		{
			_putchar((num / a % 10) + '0');
			a /= 10;
		}
	}
}
