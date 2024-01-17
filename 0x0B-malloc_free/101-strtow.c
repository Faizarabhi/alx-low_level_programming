#include "main.h"
#include <stdlib.h>

void fnc(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, f, len;
	char **words;

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

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	fnc(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * fnc - a fnc function for fetching words into an array
 * @words: the strings array
 * @str: the string
 */
void fnc(char **words, char *str)
{
	int i, j, start, f;

	i = j = f = 0;
	while (str[i])
	{
		if (f == 0 && str[i] != ' ')
		{
			start = i;
			f = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, start, i, j);
			j++;
			f = 0;
		}

		i++;
	}

	if (f == 1)
		create_word(words, str, start, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
