#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string
 * Return - no return
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; c >= 0; c++)
	{
		if (str[c] == '\0')
			break;
	}
	for (c--; c >= 0; c--)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
