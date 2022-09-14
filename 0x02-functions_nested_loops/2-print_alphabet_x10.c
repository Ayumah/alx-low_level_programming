#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times in lowercase
 *
 * Return: 0 on success.
 */
void print_alphabet_x10(void)
{
	char alp;
	int i = 0;

	while (i <= 9)
	{

	for (alp = 'a'; alp <= 'z'; alp++)

		_putchar(alp);

			_putchar('\n');

	i++;
	}

}
