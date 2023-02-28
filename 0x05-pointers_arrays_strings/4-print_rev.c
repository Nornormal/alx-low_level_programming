#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string
 * Return - no return
 */
void print_rev(char *s)
{
	int c;

	for (c = n; c > 0; c--)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
	_putchar(str[c]);
	}
}
