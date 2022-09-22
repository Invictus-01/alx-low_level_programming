#include "main.h"

/**
<<<<<<< HEAD
* print_number - function that prints an integer
*
* @n: the given integer
*/
=======
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
>>>>>>> ab6738f58f87776b5050d01c9f18807e6882d4dd
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
