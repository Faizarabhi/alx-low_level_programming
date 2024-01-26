#include "variadic_functions.h"
/**
 * print_strings - functio prints numbers
 * @separator: ", "
 * @n: the number of list
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *str;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
		printf("%s", str);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
