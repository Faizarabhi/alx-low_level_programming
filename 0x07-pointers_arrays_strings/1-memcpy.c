#include "main.h"
/**
 * *_memcpy - function
 * @dest: the buffer
 * @src: the character
 * @n: the size of the buffer
 * Return: prt on s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (ptr);
}
