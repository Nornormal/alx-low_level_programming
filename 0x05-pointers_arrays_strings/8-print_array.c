#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n,
 * elements of an array of integers.
 * @a: string
 * @n: n element
 *
 */
void print_array(int *a, int n)
{
	int l = 0;

	for (; l < n; l++)
	{
		printf("%d", *(a + l));
		if (l != (n - 1))
			printf(", ");
	}
	printf("\n");
}
