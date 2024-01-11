#include <stdio.h>
#include <stdlib.h>
/*this programme print alphabet from a to z lower upper */
/**
 * main - main block
 * does not accept any type of arguments
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}

