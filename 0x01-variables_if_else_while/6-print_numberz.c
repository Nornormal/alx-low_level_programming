#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always 0
 */
int main(void)
{
	char c[10] = "0123456789";
	int f = 0;

	while (f < 11)
	{
		putchar(c[f]);
		f = f + 1;
	}
	putchar('\n');
	return (0);
}
