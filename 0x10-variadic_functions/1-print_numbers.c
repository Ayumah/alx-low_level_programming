#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x;

	va_list args;

	va_start(args, n);


	for (i = 0; i < n; i++)

	{
		x = va_arg(args, unsigned int);
		printf("%d", x);

		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);

	}
	printf("\n");

	va_end(args);

}
