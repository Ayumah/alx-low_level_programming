#include "dog.h"
#include <stdlib.h>

/**
* init_dog - function that initializes a variable of type struct dog
* @d: tag
* @name: Name of the dog
* @age: Age of the dog
* @owner: owner of the dog
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
