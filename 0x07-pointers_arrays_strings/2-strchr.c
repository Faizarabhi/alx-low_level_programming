#include "main.h"
/**
 * *_strchr - function
 * @s: the buffer
 * @c: the character
 * Return: prt on s
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
