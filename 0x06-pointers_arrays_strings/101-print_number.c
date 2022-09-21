#include "main.h"
/**
 * print_number - the function that prints an integer using  _putchar
 * @n: the given integer to be printed
 */

void print_number(int n)
{
	int p, m, co;

	m = 0;
	p = 1;
	co = n;
	if (n < 0)
	{
		_putchar('-');
		m = 1;
	}

	while (co > 9 || co < -9)
	{
		p *= 10;
		co /= 10;
	}

	while (p > 0)
	{
		if (p > 9)
		{
			if (!m)
				_putchar((n / p % 10) + '0');
			else
				_putchar((n / p % 10) * -1 + '0');

			p /= 10;
		}
		if (p == 1)
		{
			if (m)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			p = 0;
		}
	}
}
