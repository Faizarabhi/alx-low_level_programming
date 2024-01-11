#include "main.h"
/**
 * *_strcat - the function.
 * @dest: 1st parametre
 * @src: 2nd parametre
 * Return: po,ter to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}
