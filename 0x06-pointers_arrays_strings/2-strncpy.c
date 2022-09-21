#include "main.h"
/**
 * _strncpy - function that copies a string just like the function strncpy
 * @dest: The destination string; to be copied to
 * @src: The string to be copied from (source string)
 * @n: the number of characters inputed
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
