#include "main.h"
/**
* _strcat - concatenates two strings
* @src: The string to be appended to dest
* @dest: The string to which src is appended
* Return: dest to the destination array
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

/* overwrite the null byte at the end of dest */
	while (dest[a] != '\0')
	{
		a++;
	}
/* copies the bytes from string src*/
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
/* adding the termianting null byte */
	dest[a] = '\0';

	return (dest);
}
