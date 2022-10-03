#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array -  function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size: sixe of the array
 * @c: character to initialize array with
 *
 * Return: NULL if size = 0,or pointer to the array
 */
char *create_array(unsigned int size, char c)
{

	char *str;
	str = malloc(sizeof(char) * size);
	str[0] = c;

	while (size != 0)

		return (str);


	return (0);

}
