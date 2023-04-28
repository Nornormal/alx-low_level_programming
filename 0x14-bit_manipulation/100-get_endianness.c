#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *en = (char *)&n;

	if (*en == 1)
		return (1);

	return (0);
}
