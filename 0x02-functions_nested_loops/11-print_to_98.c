#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: first number
 * Void: displays all natural numbers
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}

		else if (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
	}

	printf("%d", 98);
	printf("\n");
}
