#include <stdlib.h>
#include <time.h>
/*
 *main - Entry point
 *Return - always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if( n==0 )
	{
		printf("is zero\n");
	}
	if(n > 0 )
	{
		printf("is positive\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
