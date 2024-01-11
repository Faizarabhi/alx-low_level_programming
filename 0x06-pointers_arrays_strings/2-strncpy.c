#include "main.h"
/**
 * *_strncpy - function
 * @dest: 1st par
 * @src: 2nd par
 * @n: 3rd par
 * Return: pointer on dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		dest[i] = src[i];
	}
	for (j = i; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
