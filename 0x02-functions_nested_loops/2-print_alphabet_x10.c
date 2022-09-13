#include "main.h"
/**
* print_alphabet_x10 - the main function
* Return: 0 once successful
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i <= 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
		}
		alph++;
	_putchar('\n');
	}
	i++;
}
