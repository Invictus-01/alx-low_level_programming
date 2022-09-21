#include "main.h"
/**
 * leet - function that replaces some characters in a string
 * @c: the pointer variable that holds the string
 * Return: c
 */
char *leet(char *c)
{
	int i, b, replacer[] = {'4', '3', '0', '7', '1'};
	int locate[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (c[i] == locate[b])
			{
				c[i] = replacer[b / 2];
				b = 9;
			}
		}
	}

	return (c);
}
