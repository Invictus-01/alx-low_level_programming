#include "main.h"
/**
* _strncat - a function that concatenates two strings
* @dest: The string to be copied from
* @src: The string to be appended to dest
* @n: number of bytes to used
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	for (c = 0; c < n; c++)
	{
		dest[a + c] = src[c];
		if (src[c] == '\0')
		{
			c = n;
		}
	}

	return (dest);
}
