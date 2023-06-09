#include <stdio.h>
#include <stdlib.h>

int calculateMinCoins(int cents)
{
	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int numDenominations = sizeof(denominations) / sizeof(denominations[0]);
	int i;

	if (cents < 0)
	{
	return (0);
	}

	for (i = 0; i < numDenominations; i++)
	{
	coins += cents / denominations[i];
	cents %= denominations[i];
	}

	return (coins);
}

int main(int argc, char *argv[])
{
	int cents;
	int minCoins;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);
	minCoins = calculateMinCoins(cents);

	printf("%d\n", minCoins);
	return (0);
}

