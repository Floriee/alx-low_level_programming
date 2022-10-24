#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: an input integer to be swapped
 * @b: an inpit integer to be swapped
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
