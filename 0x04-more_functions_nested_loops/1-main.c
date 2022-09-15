#include "main.h"
#include <stdio.h>

/**
* main - checks the code
*
* Return: 0 once successful
*/
int main(void)
{
	char c;

	c = '2';
	printf("%c: %d\n", c, _isdigit(c));
	c = 's';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
