#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial string
 * @accept: substring
 *
 * Return: number of bytes in the initial segement of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				initial_len++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (initial_len);
		}

		s++;
	}

	return (initial_len);
}
