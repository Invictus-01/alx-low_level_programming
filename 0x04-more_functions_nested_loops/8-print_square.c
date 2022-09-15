#include "main.h"
/**
* print_square - main function
* @size: The size of the squares
* Return; size
*/
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
