#include "main.h"
/**
* print_number - function that prints an integer
* @n: the given integer
*/
void print_number(int n)
{
	unsigned int nl;

	if (n < 0)
	{
		_putchar('-');
		nl = -n;
	}
	else
	{
		nl = n;
	}
	if (nl / 10 != 0)
		print_number(nl / 10);

	_putchar((nl % 10) + 48);
}
