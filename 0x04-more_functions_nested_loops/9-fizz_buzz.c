#include <stdio.h>
/**
* main - entry point
* print numbers from 1 to 100 with conditions
* Return: 0 once successful
*/
int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (a = 1; a <= 100; a++)
	{
		if (a == 100)
			printf("%s", b);
		else if ((a % 5 == 0) && (a % 3 == 0))
		{
			printf("%s ", fb);
		}
		else if ((a % 5) == 0)
		{
			printf("%s ", b);
		}
		else if ((a % 3) == 0)
		{
			printf("%s ", f);
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
