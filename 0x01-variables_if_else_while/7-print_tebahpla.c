#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char f[26] = "abcdefghijklmnopqrstuvwxyz";
	int p = 25;

	while (p >= 0)
	{
		putchar(f[p]);
		p = p - 1;
	}
	putchar('\n');
	return (0);
}
