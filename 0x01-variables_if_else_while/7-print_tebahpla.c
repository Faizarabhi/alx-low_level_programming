#include <stdio.h>
#include <stdlib.h>
/*this programme print alphabet from a to z */
/**
 * main - main block
 * does not accept any type of arguments
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar (c);
		c--;

	}

putchar('\n');
	return (0);
}

