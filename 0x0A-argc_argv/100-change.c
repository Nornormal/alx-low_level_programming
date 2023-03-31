#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins,
 * to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
