#include "main.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @a: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
