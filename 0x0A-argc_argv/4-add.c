#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;
	
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return(1);
		}
		else
		{
			add = add + atoi(argv[i]);
		}
	printf("%d\n, add);
	return(0);
}
