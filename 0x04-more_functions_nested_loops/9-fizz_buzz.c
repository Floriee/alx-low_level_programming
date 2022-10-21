#include <stdio.h>

/**
 * main- entry point
 * Return: always 0
 */

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
	if (n % 3 == 0)
		printf("Fizz");
	if (n % 5 == 0)
		printf("Buzz");
	if (n % 3 != 0 && n % 5 != 0)
		printf("%d", n);
	}

	printf("\n");
	return (0);
}
