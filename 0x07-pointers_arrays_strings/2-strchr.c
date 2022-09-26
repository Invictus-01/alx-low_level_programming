#include "main.h"
/**
 * _strchr - searches string for given character
 * @s: string given
 * @c: character given
 * Return: returns pointer to character in string, or null
 *
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	if (s[a] == c)
	{
		return (s + a);
	}
		return ('\0');
}

