#include <stdio.h>
#include "main.h"

/**
 * _strcpy -  a function that copies the string,
 * pointed to by src.
 * @dest: destination
 * @src: source
 *
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; c >= 0; c++)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
	}
	return (dest);
}
