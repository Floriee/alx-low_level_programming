#include "main.h"

/**
 * rot13- encodes a string using rot13.
 * @n: the string
 * Return: the pointer to dest
 */

char *rot13(char *n)
{
	int i, j;

	char *x =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char *y =
		"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (n[i] == x[j])
			{
				n[i] = y[j];
					break;
			}
		}
	}

	return (n);
}
