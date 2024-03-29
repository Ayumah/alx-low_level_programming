#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case if the strind is empty, return 0 */

	if (*s == '\0')
	{
		return 0;
	}

	return 1 + _strlen_recursion(s + 1);
}
