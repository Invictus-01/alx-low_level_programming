#include "main.h"
#include <unistd.h>

/**
* _putchar - main functions
* @c: the given character to be printed out
*
* Return: 1 once successful
* On any account of error, return -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
