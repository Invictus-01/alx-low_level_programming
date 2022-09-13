#include "main.h"
/**
* _isalpha - main function
* Return: 1 once successful
* Then return 0 if otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
