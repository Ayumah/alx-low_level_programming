#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main.c */
/* Generate random number and state whether it is negative, positive / zero*/
/* n: randon number*/
/* function main is the entry point*/
/* Return: always 0 (success)*/
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
