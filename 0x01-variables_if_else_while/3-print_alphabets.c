#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: Always 0 success
 */

int main(void)
{
	char e[26] = "abcdefghijklmnopqrstuvwxyz";
	char f[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int c = 0, m = 0;

	while (c <= 25)
	{
		putchar(e[c]);
		c = c + 1;
	}
	while (m <= 25)
	{
		putchar(f[m]);
		m = m + 1;
	}
	putchar('\n');
	return (0);
}
