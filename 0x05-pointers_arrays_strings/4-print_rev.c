#include "main.h"
/**
 * print_rev - prints the given string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int count = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		count++;
	}

	for (b = (count - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
