#include <stdio.h>
/**
 * main - Entry point
 * listing data types and modifiers with their argument as variables
 * sizeof evalutes the sizes of the data types and modifiers
 * Return: 0 once successful
 */
int main(void)
{
	char chartype;
	int inttype;
	long int a;
	long long int b;
	float floattype;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %d byte(s)\n", sizeof(a));
	printf("Size of a long long int: %d byte(s)\n", sizeof(b));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));

	return (0);
}
