#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s - string to be printed
 *
 */
void rev_string(char *s)
{
	int len, i;
	char *begin, *end, temp;

	len = _strlen(s);
	begin  = s;
	end    = s;

	for (i = 0; i < len - 1; i++)
		end++;

		for (i = 0; i < len / 2; i++)
		{
			temp   = *end;
			*end   = *begin;
			*begin = temp;

			begin++;
			end--;
		}
}
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	i++;

	return (i);
}
