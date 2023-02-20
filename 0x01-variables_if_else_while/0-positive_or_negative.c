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
		printf(" %i n= \n", n is zero);
	}
	if(n > 0 )
	{
		printf(" %i n= \n", n is positive);
	}
	else
	{
		printf(" %i n= \n", n is negative);
	}
	return(0);
}
