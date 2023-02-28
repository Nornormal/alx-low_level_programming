#include "main.h"

/**
 * puts2 - a function that prints every other character of a string.
 * @str: string
 *
 */
void puts2(char *str)
{
	int c;

	for (c = 0; c >= 0; c++)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (c % 2 == 0)
			_putchar(str[c]);
	}
}
