#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @src: string to be appended
 * @dest: destination string
 *
 * Return: dest - a pointer to the resulting string
 */
int _strlen(char *s)
{

	int n;

	for (n = 0; *s != '\0'; s++)

		n++;

	return (n);

}
char *_strcat(char *dest, char *src)
{

	int i;
	int dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)

		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}
