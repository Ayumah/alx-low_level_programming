#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination of the memory area
 * @src: memory area to be copied
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;

	}

	return (dest);

}
