#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int c, l;

	for (c = 0; c >= 0; c++)
	{
		if (str[c] == '\0')
			break;
	}

	if (c % 2 == 1)
		l = c / 2;
	else
		l = (c - 1) / 2;

	for (l++; l < c; l++)
		_putchar(str[l]);
	_putchar('\n');
}
