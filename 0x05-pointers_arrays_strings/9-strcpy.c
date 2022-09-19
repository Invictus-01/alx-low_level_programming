#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: pointer to the buffer to copy from
 * @src: pointer to the string to be copied
 * Return: string from dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
