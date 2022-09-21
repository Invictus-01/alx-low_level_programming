#include "main.h"
/**
* string_toupper - converts lowercase characters in a string to uppercase
* @c: pointer variable to the string of characters
* Return: uppercase characters
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
