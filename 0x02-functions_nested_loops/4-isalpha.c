#include "main.h"

/**
 * _isalpha - prints 1 if lower case and 0 otherwise .
 * Return: Nothing
 * @c: the parametre.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
