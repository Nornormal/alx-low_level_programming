#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		if (j == 101 || j == 113)
		{
			continue;
		}
		putchar(j);
	}
	putchar('\n');
	return (0);
}
