#include "main.h"
/**
 * *_strncpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: destination to copy the string
 * @n: length of string
 *
 * Return: dest on success
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}

	dest[i] = '\0';


	return (dest);
}
