#include<stdio.h>

/**
 * main-entry point
 *
 * Return:always(0)
 */

int main(void)
{
	int x;
	int y;

	for (x = 'a', x <= 'z'; x++;)
	{
		putchar(x);
	}
	for (y = 'A', y <= 'Z'; y++;)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

