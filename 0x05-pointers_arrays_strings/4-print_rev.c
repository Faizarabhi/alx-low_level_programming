#include "main.h"
/**
 * print_rev - the function that print number of characters
 * @s: the parametre
 * Return: return No thing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
