#include "main.h"

/**
 * print_sign - determine if a number
 * greater or equal or smaller than zero
 * @n: The input number
 *
 * Return: 1 for positive, 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
