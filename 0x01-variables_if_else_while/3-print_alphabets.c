#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 when successful
 */
int main(void)
{
	char alp1;
	char alp2;

	for (alp1 = 'a'; alp1 <= 'z'; alp1++)
	{
		putchar(alp1);
	}
	for (alp2 = 'A'; alp2 <= 'Z'; alp2++)
	{
		putchar(alp2);
	}
	putchar('\n');
	return (0);
}

