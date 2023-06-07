#include "main.h"
#include "stdio.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer to be checked
 *
 * Return: 0 for success
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
