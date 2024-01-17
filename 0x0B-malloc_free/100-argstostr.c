#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	int ln = 0;

	while (*s++)
		ln++;
	return (ln);
}
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, ln, tot;
	int n = 0;
	char *ptr;

	if (!ac || !av)
		return (NULL);
	tot = 0;
	for (i = 0; i < ac; i++)
	{
		ln = _strlen(av[i]) + 1;
		tot += ln;
	}
	ptr = malloc(sizeof(char) * tot + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		ln = _strlen(av[i]);
		for (j = 0; j < ln; j++, n++)
		{
			ptr[n] = av[i][j];
		}
		ptr[n++] = '\n';
	}
	ptr[n] = '\0';
	return (ptr);
}
