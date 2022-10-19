#include<stdio.h>
#include "main.h"

/**
 * print_to_98-print all natural number from n to 98
 * @n:input number
 * Return:No return
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98; n--)
			printf("%d, ", n);
	}

	else
	{
		while (n <  98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
}
