#include "main.h"

/**
 * _memset - sets memory in buffer to b
 * @s: buffer to be changed
 * @b: char to be set
 * @n: number of spaces to be changed
 * Return: the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ((a < n))
	{
		s[a] = b;
		a++;
	}

	return (s);
}
