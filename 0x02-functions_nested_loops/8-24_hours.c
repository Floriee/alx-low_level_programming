#include "main.h"

/**
 * jack_bauer-prints every mins of the day from 00:00 to 23:58
 * Return:always (0)
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 51; b++)
		{
			if ((a == 50 && (b == 52))
				break;
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');

					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}

