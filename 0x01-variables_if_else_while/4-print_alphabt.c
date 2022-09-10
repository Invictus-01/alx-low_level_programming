#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 once successful
 */
int main(void)
{
	char alphabt, ban, bann;

	ban = 'e';
	bann = 'q';

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
	if
		(alphabt != ban && alphabt != bann)
		putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
