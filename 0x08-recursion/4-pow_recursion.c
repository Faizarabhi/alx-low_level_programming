#include "main.h"
/**
 * _pow_recursion - function
 * @x: 1st par
 * @y: 2nd par
 * Return: x pow y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
