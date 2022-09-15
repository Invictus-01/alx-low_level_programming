#include "main.h"
/**
* print_line - main function
* @n: The number of times that _ will be printed
* Return: n
*/
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
