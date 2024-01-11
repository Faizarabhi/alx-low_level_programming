#include "main.h"

/**
 * *leet - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *leet(char *str)
{
	char min[] = {97, 101, 111, 116, 108};
	char maj[] = {65, 69, 79, 84, 76};
	char conv[] = {52, 51, 48, 55, 49};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == min[j] || str[i] == maj[j])
				str[i] = conv[j];
		}
	}
	return (str);
}
