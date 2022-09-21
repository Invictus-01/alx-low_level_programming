#include "main.h"
/**
* _strcmp - a function that compares two strings
* @s1: input one
* @s2: input two
* Return: 0 if both strings are equal, return (s1 - s2) if they are not equal
*/
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	}
	return (0);
}
