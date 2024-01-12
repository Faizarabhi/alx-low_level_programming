#include <stdio.h>

/**
 * *_strcpy - function copy
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 *
*/



char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}
