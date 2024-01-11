#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
			if (i != j && j != k && i < j && j < k)
			{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i != '7')
			{
				putchar(',');
				putchar(' ');
			}
			}
			}
			}
			}
			putchar('\n');

		return (0);
}

