#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
