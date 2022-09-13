#include "main.h"
/**
* print_last_digit - main function
* @n: The variable given
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int a;

	n >= 0;
	if (n < 0)
	{
		n = -n;
	}
		a = n % 10;
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
	}
	return (a);
}
