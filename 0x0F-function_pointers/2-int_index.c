#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: an array
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
*
* Return: -1 if no element matches or index of the first
*		element for which cmp function does not
*			return 0.
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
