#include "main.h"
/**
 * *str_concat - pointer on s
 * @s1: 1st strings
 * @s2: 2nd strings
 * Return: return s if != NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, leng = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		leng++;
	for (i = 0; s2[i] != '\0'; i++)
		leng++;
	s = malloc((leng + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
