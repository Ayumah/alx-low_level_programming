#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* assign a random number to the value n and state whether it is negative, positive or zero
* n: randon number
* main - Entry point
*/
int main(void)
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
