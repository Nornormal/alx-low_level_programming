#include "main.h"

/**
 * print_most-numbers - print numbers from 0 to 9
 *
 * Return: no return
 */
void print_most-numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i = 2 || i = 4)
		{
			continue;
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
