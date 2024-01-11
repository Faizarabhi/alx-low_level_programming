#include "main.h"
/**
 * _strcmp - function
 * @s1: 1st par
 * @s2: 2nd par
 * Return: pointer on dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, comp;

	i = 0;
	comp = 0;
	while (comp == 0 && s1[i] != '\0')
	{
		comp = s1[i] - s2[i];
		i++;
	}
		return (comp);
}
