#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @c: the pointer variable that holds the array of characters in the string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *c)
{
	int a, b;
	int cap = 32;
	int seprt[] = {'\n', '\t', ',', ';', '.', '?', '"', '(', ')', '{', '}', ' '};

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = c[a] - cap;
		}

		cap = 0;

		for (b = 0; b <= 12; b++)
		{
			if (c[a] == seprt[b])
			{
				b = 12;
				cap = 32;
			}
		}
	}
	return (c);
}
