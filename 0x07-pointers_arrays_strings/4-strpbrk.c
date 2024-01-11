#include "main.h"
/**
 * *_strpbrk - the function
 * @s: first par
 * @accept: seconde par
 * Return: tha firsy occurance of accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
		i++;
		}
	s++;
	i = 0;
	}
	return ('\0');
}
