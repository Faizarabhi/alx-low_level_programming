#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function
 * @name: strig
 * @f: pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
