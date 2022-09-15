#include "main.h"
/**
* _isdigit - main function
* @c: The given variable
* Return: 1 if c is a digit
* Otherwise, return 0
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
