#include <stdlib.h>
#include <string.h>
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
	size_t i = 0;
	size_t len = strlen(b);
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		char c = b[i];

		if (c == '0')
		{

		result = (result << 1) + 0;
		}
		else if (c == '1')
		{
			result = (result << 1) + 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
