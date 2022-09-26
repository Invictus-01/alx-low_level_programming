#include "main.h"
/**
 * print_chessboard - the function that prints chessboard
 * @a: the given array
 */
void print_chessboard(char (*a)[8])
{
	int b, i;

	i = 0;
	b = 0;
	while (a[b][i] != '\0')
	{
		while (i < 8)
		{
			_putchar(a[b][i]);
			i++;
		}
		i = 0;
		_putchar('\n');
		b++;
	}
}
