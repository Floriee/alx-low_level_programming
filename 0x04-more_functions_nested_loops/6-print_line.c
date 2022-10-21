#include "main.h"

/**
 * print_line- a function that that draws a straight line in the terminal.
 * @n: number of time straight line is printed
 * Return: always 0
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
