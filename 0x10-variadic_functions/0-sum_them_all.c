#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters to be summed
 *
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, unsigned int);

	}

	va_end(args);

	return (result);

}
