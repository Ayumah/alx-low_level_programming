#include "main.h"

/**
 * main - function that prints alphabet in lowercase
 *
 * Return: 0 on success.
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)

		_putchar(alp);

	_putchar('\n');

}
