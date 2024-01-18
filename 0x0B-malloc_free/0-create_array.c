#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array and fills it with a character
 * @size: size of the array
 * @c: character to fill the array with
 * Return: returns the created array or NULL if allocation fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0) {
return (NULL);
}

ptr = (char *)malloc(size * sizeof(c));

if (ptr == NULL) {
return (NULL);
}

for (i = 0; i < size; i++) {
ptr[i] = c;
}

return (ptr);
}
