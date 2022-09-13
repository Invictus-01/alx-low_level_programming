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
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
			_putchar('\n');
	}
	i++;
}
