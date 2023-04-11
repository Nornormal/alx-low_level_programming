#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bitno = 0;

	while (x > 0)
	{
		bitno += (x & 1);
		x >>= 1;
	}

	return (bitno);
}
