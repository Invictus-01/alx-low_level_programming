#include "main.h"
/**
 * puts_half - main function that prints half of a string
 * If odd length, a = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of the input
 */
void puts_half(char *str)
{
	int i, a, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	a = (length / 2);

	if ((length % 2) == 1)
	{
		a = ((length + 1) / 2);
	}

	for (i = a; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
