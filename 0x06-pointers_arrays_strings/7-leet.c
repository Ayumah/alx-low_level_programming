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
 * leet - encodes a string
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			    str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}

		index1++;
	}

	return (str);
}
