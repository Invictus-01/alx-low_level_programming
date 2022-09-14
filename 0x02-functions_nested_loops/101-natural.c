#include<stdio.h>
/**
* main - entry point
* Return: 0 once successful
*/
int main(void)
{
	int a, b, n, sum;

	a = 0;
	b = 0;

	for (n = 0; n < 1024; n++)
		if ((n % 3) == 0)
		{
			a = a + n;
		}
		else if ((n % 5) == 0)
		{
			b = b + n;
		}

	sum = a + b;
	printf("%d\n", sum);
	return (0);
}
