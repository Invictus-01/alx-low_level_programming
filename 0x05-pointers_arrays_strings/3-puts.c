#include "main.h"
/**
 * _puts - prints the given string to stdout
 * @str: pointer variable of char type which holds the string
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
