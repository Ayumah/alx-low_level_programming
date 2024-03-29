#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - function that converts a binary number to unsigned int
* @b: a pointer to a string of 0 and 1 chars
*
* Return: the converted number
*		0 if there is one or more char in the string b
*		that is not 0 or 1 and b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
