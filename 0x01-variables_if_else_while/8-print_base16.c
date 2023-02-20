#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	for (p = 97; p < 103; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
