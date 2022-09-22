#include "main.h"
/**
 * _strcmp - fuction that compares twp strings
 * @s1: string one
 * @s2: string two
 *
 * Return: integer number
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);

}
