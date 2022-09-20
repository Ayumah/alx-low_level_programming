#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to a character
 * Return: n on sucess
 */
int _strlen(char *s)
{

	int n;

	for (n = 0; *s != '\0'; s++)

		n++;

	return (n);

}
