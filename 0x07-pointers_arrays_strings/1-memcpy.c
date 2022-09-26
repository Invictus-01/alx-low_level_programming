#include "main.h"

/**
 * _memcpy - copies src to dest
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of chars to copy
 * Return: returns the destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
