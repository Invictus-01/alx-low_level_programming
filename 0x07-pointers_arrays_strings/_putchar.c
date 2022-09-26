#include <unistd.h>
#include "main.h"

/**
* _putchar - prints a character
* @c: the given character
* Return: the printed character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
