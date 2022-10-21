#include "main.h"

/**
 * print_diagonal- a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}

	_putchar('\n');
}
