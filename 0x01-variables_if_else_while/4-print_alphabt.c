#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	char d[26] = "abcdefghijklmnopqrstuvwxyz";
	int j = 0;

	while (j < 25)
	{
		if (j == 4 || j == 16)
		{
			continue;
		}
		putchar(d[j]);
		j = j + 1;
	}
	putchar('\n');
	return (0);
}
