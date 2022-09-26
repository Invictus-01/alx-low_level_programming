#include "main.h"
/**
 * *_strstr - finds string inside string
 * @haystack: string with all goodies
 * @needle: string to be found
 * Return: matching substring
 * Else, return null
 */
char *_strstr(char *haystack, char *needle)
{
	char *srch;
	char *strt;

	while (*haystack != '\0')
	{
		strt = haystack;
		srch = needle;
		while (*needle != '\0' && *srch != '\0' && *srch == *haystack)
		{
			haystack++;
			srch++;
		}
		if (*srch == '\0')
			return (strt);
		haystack = strt + 1;
	}
	return (0);
}
