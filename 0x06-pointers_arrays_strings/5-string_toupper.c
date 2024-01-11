#include "main.h"
/**
 * *string_toupper - function low toupp
 * @ptr: 1st parametre
 * Return: char to pointer
 *
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] > 96 && ptr[i] < 123)
			ptr[i] -= 32;
	}
	return (ptr);
}
