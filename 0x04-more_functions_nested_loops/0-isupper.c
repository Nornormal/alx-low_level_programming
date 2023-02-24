#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: letter will checked
 *
 * Return: 1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int c;
	
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
