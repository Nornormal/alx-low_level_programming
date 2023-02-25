#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, c;

	n = 612852475143;
	for (c = 2; c <= n; c++)
	{
		if (n % c == 0)
		{
			n /= c;
			c--;
		}
	}
	printf("%ld\n", c);
	return (0);
}
