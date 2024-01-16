#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into w.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (w)
 */
char **strtow(char *str)
{
	int i, f, len;
	char **w;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = f = len = 0;
	while (str[i])
	{
		if (f == 0 && str[i] != ' ')
			f = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			f = 0;
			len++;
		}
		i++;
	}

	len += f == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	w = (char **)malloc(sizeof(char *) * (len + 1));
	if (w == NULL)
		return (NULL);

	util(w, str);
	w[len] = NULL;
	return (w);
}

/**
 * util - a util function for fetching w into an array
 * @w: the strings array
 * @str: the string
 */
void util(char **w, char *str)
{
	int i, j, s, f;

	i = j = f = 0;
	while (str[i])
	{
		if (f == 0 && str[i] != ' ')
		{
			s = i;
			f = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(w, str, s, i, j);
			j++;
			f = 0;
		}

		i++;
	}

	if (f == 1)
		create_word(w, str, s, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @w: the array of strings
 * @str: the string
 * @s: the sing index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **w, char *str, int s, int end, int index)
{
	int i, j;

	i = end - s;
	w[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; s < end; s++, j++)
		w[index][j] = str[s];
	w[index][j] = '\0';
}