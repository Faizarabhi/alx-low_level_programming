#include "main.h"
/**
 * qisma - function
 * @a: 1st par
 * @b: 2nd par
 * Return: 1 or 0
 */
int qisma(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (qisma(a, b + 1));
}
/**
 * is_prime_number - function that return prime
 * @n: parametre
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (qisma(n, 2));
}
