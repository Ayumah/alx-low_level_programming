#include "main.h"
/**
 * _strlen - function that gets length of string
 * @s: string to be counted
 *
 * Return: n - length of the string
 */
int _strlen(char *s)
{

	int n;

	for (n = 0; *s != '\0'; s++)

		n++;

	return (n);

}
/**
 * *_strncat - function that concatenates two strings
 * @src: string to be appended
 * @dest: destination string
 * @n: length of the string
 *
 * Return: dest - a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}
