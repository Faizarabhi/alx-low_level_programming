#include "main.h"
/**
 * jadr - check the code
 * @a: 1st par
 * @b: 2nd par
 * Return: if true return b else return -1
 */
int jadr(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (jadr(a, b + 1));
}
/**
 * _sqrt_recursion - Function
 * @n: parametre
 * Return: the jadr of n
 *
 *
 */
int _sqrt_recursion(int n)
{
	return (jadr(n, 1));
}
