#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: the parameter to be checked
 *
 * Return: 1 for success 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);
}
