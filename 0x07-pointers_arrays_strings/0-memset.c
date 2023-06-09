#include "main.h"

/**
 * *_memset - function that fills memory with constant byte
 * @s: the address of memory
 * @b: the constant byte to fill memory
 * @n: the number of bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
