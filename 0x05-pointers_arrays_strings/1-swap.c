#include "main.h"
/**
 * swap_int - function that swap 2 variables
 * @a: the 1st parametre
 * @b: the 2nd parametre
 *
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
