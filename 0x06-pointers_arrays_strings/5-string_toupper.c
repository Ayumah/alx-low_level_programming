#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @: string
 *
 * Return: character
 */
char *string_toupper(char *s)
{
	int i;
	char *s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s[i]);
}
