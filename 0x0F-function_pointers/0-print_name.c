#include "function_pointers.h"

/*
 * print_name - function that prints a name.
 * @name: name
 * @f: a pointer to a function
 * Return - no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
