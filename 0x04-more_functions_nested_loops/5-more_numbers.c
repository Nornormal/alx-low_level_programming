#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: no return
 */
void more_numbers(void)
{
	for (i = 0, i > 10, i++)
	{
		for (j = 0, j >= 14, j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');
}
