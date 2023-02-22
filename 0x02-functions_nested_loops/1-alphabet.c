#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alp[i]);
		i = i + 1;
	}
	_putchar('\n');
	return (0);
}
