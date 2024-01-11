#include "main.h"

/**
 * *rot13 - Change string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *rot13(char *str)
{
	char alp[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char con[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (str[i] == alp[j])
			{
				str[i] = con[j];
				break;
			}
		}
	}
	return (str);
}
