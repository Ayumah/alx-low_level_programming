#include "main.h"

/**
 * print_numbers - function that prints the numbers from 0 t0 9
 * 
 *
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)

		_putchar((n % 10) + '0');

	_putchar('\n');
}
