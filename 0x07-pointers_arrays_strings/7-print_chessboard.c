#include "main.h"
/**
 * print_chessboard - the function that prints chessboard
 * @a: the given array
 */
void print_chessboard(char (*a)[8])
{
	int b, j;

	for (b = 0; b < 8; b++)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[b][j]);
			j++;
		}
		_putchar('\n');
	}
}
