#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 *
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{

		_putchar(str[i]);

	/*	ch[i / 2] = str[i];*/

	}

	_putchar('\n');

}
/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 *
 * Return: i on success
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)

	i++;

	return (i);
}
