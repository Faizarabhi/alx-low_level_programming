#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function
 * @d: 1st par
 * @name: 2nd par
 * @age: 3rd par
 * @owner: 4th par
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
