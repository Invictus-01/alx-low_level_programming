#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
