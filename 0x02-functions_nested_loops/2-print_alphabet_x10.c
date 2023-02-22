#include "main.h"

/**
 * main - print the alphabet in lowercase 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j;

	for (j = 0; j < 10; j++)
	{
		while (i < 26)
		{
			_putchar(alp[i]);
			i = i + 1;
		}
	}	
	_putchar('\n');
	return (0);
}
