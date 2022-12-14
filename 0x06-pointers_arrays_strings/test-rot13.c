#include "main.h"
/**
 * rot13 - rotates first 13 characters with the second 13 in the alphabet
 * @c: the pointer variable holding the string
 * Return: the rotated string 'c'
 */
char *rot13(char *c)
{
	int a;
	char str1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char str2[] = "nopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		if ((c[a] > 64 && c[a] < 91) || (c[a] > 96 && c[a] < 123))
		{
			c[a] = ((c[a] - 65) > 25) ? str2[c[a] - 97] : str1[c[a] - 65];
		}
	}
	return (c);
}
