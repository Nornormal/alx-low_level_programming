#include <stdio.h>

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j == 4 || j == 16)
		{
			continue;
		}
		putchar(j);
	}
	putchar('\n');
	return (0);
}
