#include "main.h"

/**
 * Puts_half - prints half of a string
 * @str: string to be printed
 *
 */
void puts_half(char *str)
{
	int i;
	int j;
	int len = _strlen(str);


	if ((len % 2) == 0)
		j = len / 2;

	else

		j = (len - 1) / 2;

	for (i = j; i < len; i++)
	{

		_putchar(str[i]);



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
