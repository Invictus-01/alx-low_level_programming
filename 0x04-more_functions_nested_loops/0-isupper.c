#include "main.h"
/**
* _isupper - main function
* @c: The given variable
* Return: 1 if it is uppercase
* Otherwise, return 0
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
