#include "main.h"

/**
 * print_most_numbers- prints numbers from 0 to 9
 * expect 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; c < '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar("\n");
}
