#include "main.h"
/**
 * flip_bits - set the binary index
 * @n: numero in decimal
 * @m: index of binary if 1 or 0
 * Return: 0 or 1 or -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res, def;
	unsigned int index, k = 0;

	res = 1;
	def = n ^ m;
	for (index = 0; index < ((sizeof(unsigned long int)) * 8); index++)
	{
		if (res == (def & res))
		{
			k++;
		}

	res <<= 1;
	}
	return (k);
}
