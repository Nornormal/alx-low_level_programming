#include "main.h"
#include <stdio.h>

/**
 * unsigned int binary_to_uint - a function convert binary to decimal
 * @b: binary number.
 *
 * Return: converted number
 * or 0 if b is NULL or not binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, j = 1, len = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len += b[i];

	for (i--; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		
		if (b[i] & 1)
		{
			sum += j;
		}
	}
	return (sum);
}
