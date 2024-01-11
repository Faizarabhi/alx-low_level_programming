#include "main.h"
/**
 * _strlen - the function that print number of characters
 * @s: the parametre
 * Return: return the number of characters
 */
int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
