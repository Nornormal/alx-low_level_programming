#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: char
 * Return: returns the length of a string.
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}
