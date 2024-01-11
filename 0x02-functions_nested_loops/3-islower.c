#include "main.h"

/**
 * _islower - prints 1 if lower case and 0 otherwise .
 * Return: Nothing
 * @c: the parametre.
 */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
		return (1);
	else
		return (0);
}
