#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0 success
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alp[i]);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
