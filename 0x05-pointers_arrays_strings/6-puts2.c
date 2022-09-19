#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: printed character
 */
void puts2(char *str)
{
	int a;

	a = 0;
	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
