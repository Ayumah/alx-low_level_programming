#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function that executes a function
*  as a given parameter on each element of an array
* @array: an array
* @size: size of the array
* @action: pointer to the function you need to use
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;


	while (i < size)
	{

		action(array[i]);
		i++;
	}

}
