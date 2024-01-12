#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compare
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal
 *
 *
 *
*/

int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] !=  s2[i])
		{
			n = s1[i] -  s2[i];
			break;
		}
		else
		{
			n = 0;
		}
	}
	return (n);
}
