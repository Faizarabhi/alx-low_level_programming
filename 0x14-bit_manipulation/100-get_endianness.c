#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int binary = 1;
	char *pointer;

	pointer = (char *)&binary;
	return (*pointer);
}
