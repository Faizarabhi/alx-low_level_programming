#include"main.h"
/**
 * _strcat - function that concatinate two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
