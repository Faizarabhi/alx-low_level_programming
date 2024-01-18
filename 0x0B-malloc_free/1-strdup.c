#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function creat array
 * @str: size of the array
 * Return: rerutn the array
 */
char *_strdup(char *str)
{
int leng = 0, i;
char *ptr;

if (str == NULL)
return (NULL);
for (; str[leng] != '\0'; leng++)
;
ptr = malloc((leng + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
