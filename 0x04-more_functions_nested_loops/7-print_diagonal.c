#include "main.h"
/**
 * print_diagonal - the function
 * Return: Always t
 * @n: the parametre
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
