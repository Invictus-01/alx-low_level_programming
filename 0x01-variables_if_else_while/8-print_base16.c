#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 once successful
 */
int main(void)
{
	char num, aph;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (aph = 'a'; aph <= 'f'; aph++)
	{
		putchar(aph);
	}
	putchar('\n');
	return (0);
}
