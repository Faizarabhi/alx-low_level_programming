#include "main.h"
/**
 * *_memset - function
 * @s: the buffer
 * @b: the character
 * @n: the size of the buffer
 * Return: prt on s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (ptr);
}
