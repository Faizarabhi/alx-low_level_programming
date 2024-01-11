#include "main.h"
/**
 * reverse_array - the function that print number of characters
 * @a: the parametre
 * @n: énd par
 */
void reverse_array(int *a, int n)
{
	int ch, i = 0, j = 0;

	for (i = n; i > 0; i--)
	{
		for (j = 0; j < (i - 1); j++)
		{
			ch = a[j + 1];
			a[j + 1] = a[j];
			a[j] = ch;
		}
	}
}
