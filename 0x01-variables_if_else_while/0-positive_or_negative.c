#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Function - random number generator
 * @n random number
 *
 * main - entry point
 */
int main(void) /** main - entry point*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	return (0);
}
