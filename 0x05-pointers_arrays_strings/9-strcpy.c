#include "main.h"
/**
 * *_strcpy - function pointer
 * @dest: first parametre
 * @src: second parametre
 * Return: the *dest is ret
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
