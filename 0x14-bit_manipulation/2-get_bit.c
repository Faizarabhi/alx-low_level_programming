#include "main.h"
/**
 * _div - calcul the division
 * @x: dividend
 * @y: divisor
 * Return: the result of x / y
 */
unsigned int _div(unsigned int x, unsigned int y)
{
unsigned int digit = 0;

while (x >= y)
{
x -= y;
digit++;
}
return (digit);
}
/**
 * _power - calculate the power of 2 numbers
 * @base: the base of power num
 * @pow: the power of pow
 * Return: return the result of "base" power "pow"
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 0; i < pow; i++)
	{
		result *= base;
	}
	return (result);
}
/**
 * get_bit - get the binary index
 * @n: numero in decimal
 * @index: index of binary if 1 or 0
 * Return: 0 or 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int digit, num;

	if (index > ((sizeof(unsigned long int)) * 8 - 1))
		return (-1);
	digit = _power(2, index);
	num = n & digit;
	if (num == digit)
	{
		return (1);
	}
	return (0);
}
