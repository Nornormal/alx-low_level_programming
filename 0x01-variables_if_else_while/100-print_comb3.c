#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i , f;

	i = 48;
	f = 48;
	while (f < 58)
	{
		i = 48;
		while (i < 58)
		{
			if(f != i && f < i)
			{
				putchar(f);
				putchar(i);
				if(i == 57 && f == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
