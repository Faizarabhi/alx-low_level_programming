#include "main.h"
/**
 * _puts - the function that print number of characters
 * @str: the parametre
 * Return: return the number of characters
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
