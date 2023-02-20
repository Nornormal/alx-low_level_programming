#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	char d[25] = "abcdfghijklmnoprstuvwxyz";
	int j = 0;

	while (j < 25)
	{
		putchar(d[j]);
		j = j + 1;
	}
	putchar('\n');
	return (0);
}
