#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _mod - function calculate the modul of a on b
 * @a: first par (big num)
 * @b: second par (smal num)
 * Return: the resul of a mod b
 */
int _mod(int a, int b)
{
	while (a >= b)
	{
		a = a - b;
	}
	return (a);
}
