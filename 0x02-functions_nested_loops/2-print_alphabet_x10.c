#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet from a-z 10 times.
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	}
}
