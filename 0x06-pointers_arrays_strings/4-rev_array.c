#include "main.h"
/**
* reverse_array - reverses the given arrays of integers
* @a: The pointer to address memory of the arrays
* @n: The number of elements of the arrays
*/
void reverse_array(int *a, int n)
{
	int i;
	int swp;

	for (i = 0; i < n / 2; i++)
	{
		swp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = swp;
	}
}
