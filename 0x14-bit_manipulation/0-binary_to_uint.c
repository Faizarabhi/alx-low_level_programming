#include "main.h"
/**
 * binary_to_uint - function that convert str of 0 & 1 to unsigned int;
 * @b: the str
 * Return: the total of j
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	i++;
	}
	return (j);
}
