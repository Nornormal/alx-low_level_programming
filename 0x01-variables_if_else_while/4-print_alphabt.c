#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	char d[24] = "abcdfghijklmnoprstuvwxyz";
	int j = 0;

	while (j < 24)
	{
		putchar(d[j]);
		j = j + 1;
	}
	return (0);
}
