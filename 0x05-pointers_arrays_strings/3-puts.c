#include "main.h"

/**
 * _puts - a function that prints a string.
 * @str: string
 * Reeturn - no return
 */
void _puts(char *str)
{
	int c = 0;
	
	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[c]);
		c++;
	}
}
