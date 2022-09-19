#include "main.h"
/**
 * _atoi - a function that converts the string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: the integer converted from the given string
 */
int _atoi(char *s)
{
	int a, b, c, f, length, num;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	f = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}
