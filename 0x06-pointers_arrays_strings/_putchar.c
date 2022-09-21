#include <unistd.h>
#include "main.h"
/**
* _putchar - prints a given character
* @c: The given character variable
* Return: the character using a write function
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
