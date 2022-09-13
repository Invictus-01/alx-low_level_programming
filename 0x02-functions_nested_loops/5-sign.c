#include "main.h"
/**
* print_sign - main function
* @n: the given variable
* Return: 1 and print + once n > 0
* Once n == 0, return 0 and print 0
* If n < 0, return -1 and print -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
