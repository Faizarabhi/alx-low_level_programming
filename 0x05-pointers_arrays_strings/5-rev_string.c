#include "main.h"
/**
 * rev_string - the function that print number of characters
 * @s: the parametre
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char ch;

	while (s[i] != '\0')
		i++;
	for (i = i; i != 0; i--)
	{
		for (j = 0; j < (i - 1); j++)
		{
			ch = s[j + 1];
			s[j + 1] = s[j];
			s[j] = ch;
		}
	}
}
