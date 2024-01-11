#include "main.h"
/**
 * *_strncat - the function.
 * @dest: 1st parametre
 * @src: 2nd parametre
 * @n: 3rd parametre
 * Return: po,ter to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;
	int j, i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > 0)
		{
			dest[i] = src[j];
			i++;
			n--;
		}
	}
	dest[i] = '\0';
	return (ret);
}
