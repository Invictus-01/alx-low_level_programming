#include "main.h"
/**
* rot13 - encodes a string of 13 characters
* @s: the given string to be encoded
* Return: the encoded string 's'
*/
char *rot13(char *s)
{
	int i, m;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; c[m] != '\0'; m++)
		{
			if (s[i] == c[m])
			{
				s[i] = d[m];
				break;
			}
		}
	}

	return (s);
}
