#include "main.h"
/**
 * print_array - the function that print number of characters
 * @n: the parametre
 * @a: the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
printf("\n");
}
