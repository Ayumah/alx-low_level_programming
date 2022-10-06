#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: on success return a pointer to a newly allocated space in memory
 *		containing s1 and n bytes of s2
 *		on failure return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int len;

	len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		s[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];

	s[len] = '\0';

	return (s);

}
