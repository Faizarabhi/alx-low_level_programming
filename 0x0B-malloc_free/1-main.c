#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns a pointer to the concatenated string
 *          or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1 != NULL)
    {
        while (s1[len1] != '\0')
            len1++;
    }

    if (s2 != NULL)
    {
        while (s2[len2] != '\0')
            len2++;
    }

    concatenated = malloc((len1 + len2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return (concatenated);
}

int main(void)
{
    char *s;
    s = str_concat("Hello", NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat(NULL, "Hello");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    s = str_concat(NULL, NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);

    return (0);
}
