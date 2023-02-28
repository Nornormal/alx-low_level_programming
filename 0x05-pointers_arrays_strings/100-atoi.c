#include "main.h"

/**
 * _atoi - a function that converts a string to an integer.
 * @s: string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int c = 0, size = 0, o = 0, pn = 1, m = 1, i;

	while (*(s + c) != '\0')
	{
		if (size > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			pn *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		c++;
	}

	for (i = c - size; i < c; i++)
	{
		o = o + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (o * pn);
}
