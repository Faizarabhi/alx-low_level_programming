#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function
 * @name: the par
 * @age: the par
 * @owner: the par
 * Return: pointer wich point on qtruct "dog_t"
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog = {name, age, owner};

	if (new_dog == NULL)
		return (NULL);
	return (new_dog);
}
