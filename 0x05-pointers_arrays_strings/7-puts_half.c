#include "main.h"
/**
 * puts_half - function
 * @str: the parametr
 *
 */
void puts_half(char *str)
{
int len, i = 0;
while (str[i] != '\0')
i++;
if (i % 2 == 0)
	len = i / 2;
else
	len = (i - 1) / 2 + 1;
for (len = len; len < i; len++)
{
	_putchar(str[len]);
}
_putchar('\n');
}
