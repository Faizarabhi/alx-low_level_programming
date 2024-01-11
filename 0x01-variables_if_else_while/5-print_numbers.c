#include <stdio.h>
#include <stdlib.h>
/*this programme print numbers from 0 to 9 */
/**
 * main - main block
 * does not accept any type of arguments
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a = a + 1)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}

