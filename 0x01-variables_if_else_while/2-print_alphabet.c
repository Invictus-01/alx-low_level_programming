#include <stdio.h>
/**
 * main - Entry point
 * use while loop and print the alphabet a-z
 * Return: 0 once successful
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++);
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}