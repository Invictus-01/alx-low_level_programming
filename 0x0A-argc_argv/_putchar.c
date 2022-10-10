#include <unistd.h>
/**
* _putchar - writes a character to stdout
* @c: the given character
* Return: c
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
