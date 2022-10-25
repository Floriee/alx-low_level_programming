#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character
 * @str: input string
 * Return: no return
 */

void puts2(char *str)
{
	int y = 0;

	while (y >= 0)
	{
		if (str[y] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (y % 2 == 0)
			_putchar(str[y]);
		y++;
	}
}
