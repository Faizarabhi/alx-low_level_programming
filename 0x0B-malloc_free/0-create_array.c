#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that
 *@T the pointer to the array
 *@c: input character
 *@size: the size of the array
 * Return: 1 if T is NULL and T if i goon
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *T;

	if (size == 0)
		return (NULL);
	T = malloc(sizeof(char) * size);
	if (T == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		T[i] = c;
	return (T);
}
