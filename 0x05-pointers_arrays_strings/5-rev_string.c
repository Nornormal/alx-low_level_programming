#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string
 *
 */
void rev_string(char *s)
{
	int c, l, m;
	char *str, p;

	for (c = 0; c >= 0; c++)
	{
		if (s[c] == '\0')
			break;
	}
	str = s;

	for (l = 0; l < (c - 1); l++)
	{
		for (m = l + 1; m > 0; m--)
		{
			p = *(str + m);
			*(str + m) = *(str + (m - 1));
			*(str + (m - 1)) = p;
		}
	}
}
