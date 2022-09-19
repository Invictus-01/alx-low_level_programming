#include <stdio.h>
#include "main.h"
/**
 * print_array - main function that prints n elements of an array
 * @a: pointer to the array
 * @n: is the number of elements of the array to be printed
 * Return: both a and n inputs as given
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == 0)
		{
			printf("%d", a[c]);
		}
		else
		{
			printf(", %d", a[c]);
		}
	}
		printf("\n");
}
