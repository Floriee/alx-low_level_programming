#include "main.h"

/**
 * _isdigit- checks for a digit between 0 to 9
 * @c: input number
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
