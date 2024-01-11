#include "main.h"
/**
 * _strspn - function
 * @s: the buffer
 * @accept: the character
 * Return: the size of accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i = 0, j = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count += 1;
			}
		j++;
		}
	j = 0;
	i++;
	}
	return (count);
}
