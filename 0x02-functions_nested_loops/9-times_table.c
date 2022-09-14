#include "main.h"

/** times_table - function that prints the 9 times table
 *
 *
 */
void time_table(void)
{
	int x, i, p;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			p = x * i;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
