#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: the input
 *
 * Return: 1 for digit and 0 otherwise
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
	_putchar('\n');
}
