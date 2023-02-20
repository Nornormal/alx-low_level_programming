#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main - print number n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if( n == 0 )
	{
		printf("%i n= is zero\n");
	}
	if(n > 0 )
	{
		printf("%i n= is positive\n");
	}
	else
	{
		printf("%i n= is negative\n");
	}
	return(0);
}
