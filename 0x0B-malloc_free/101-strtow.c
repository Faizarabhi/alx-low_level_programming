#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
    // Check if the input string is NULL or empty
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    // Allocate memory for an array of character pointers
    char **words = (char **)malloc(sizeof(char *));
    if (words == NULL) {
        return NULL;  // Memory allocation failed
    }

    // Initialize variables
    int wordCount = 0;
    int i = 0;

    // Loop through the input string
    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ') {
            i++;
        }

        // Check for the end of the string
        if (str[i] == '\0') {
            break;
        }

        // Find the length of the current word
        int start = i;
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        int end = i;

        // Allocate memory for the current word
        words[wordCount] = (char *)malloc((end - start + 1) * sizeof(char));
        if (words[wordCount] == NULL) {
            // Memory allocation failed, free previously allocated memory and return NULL
            for (int j = 0; j < wordCount; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }

        // Copy the current word into the allocated memory
        strncpy(words[wordCount], &str[start], end - start);
        words[wordCount][end - start] = '\0';  // Null-terminate the word

        // Resize the array of pointers to accommodate the new word
        wordCount++;
        words = (char **)realloc(words, (wordCount + 1) * sizeof(char *));
        if (words == NULL) {
            // Memory reallocation failed, free previously allocated memory and return NULL
            for (int j = 0; j < wordCount; j++) {
                free(words[j]);
            }
            return NULL;
        }
    }

    // Add a NULL pointer at the end to indicate the end of the array
    words[wordCount] = NULL;

    return words;
}
