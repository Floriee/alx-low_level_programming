#include "main.h"

/**
 * print_alphabet_x10-print all alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	char x = 0;
	char y;

	while (x++ <= 9)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
