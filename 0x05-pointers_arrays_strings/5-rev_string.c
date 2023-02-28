#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string
 *
 */
void rev_string(char *s)
{
	int c, l, m;
	char *s, p;

	for (c = 0; c >= 0; c++)
	{
		if (s[c] == '\0')
			break;
	}

	for (l = 0; l < (c - 1); l++)
	{
		for (m = l + 1; m > 0; m--)
		{
			p = *(s + m);
			*(s + m) = *(s + (m - 1));
			*(s + (m - 1)) = p;
		}
	}
}
