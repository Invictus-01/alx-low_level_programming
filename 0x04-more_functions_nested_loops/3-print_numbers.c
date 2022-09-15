#include "main.h"
/**
* print_numbers - main function
* print numbers from 0 through 9 followed by a newline
*/
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
