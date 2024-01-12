#include"main.h"
/**
 * _strncat - function that concatinate n strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: tne num of string
 * Return: pointer to resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		if (n > 0)
		{
			dest[a] = src[b];
			a++;
			n--;
		}
	}
	dest[a] = '\0';

	return (dest);
}
