#include <stdio.h>

/**
 * main - multiplication
 * Return: result
 */
int main(void)
{
	int i, j, m;

	for (i = 0; i <= 15; i++)
	{
		for (j = 0; j <= 15; j++)
		{
			m = i * j;
			printf("%d ,", m);
		}
		printf("\n");
	}
	return (0);
}
