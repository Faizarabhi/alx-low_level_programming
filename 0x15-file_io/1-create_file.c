#include "main.h"
/**
 * create_file - function
 * @filename: the name of file
 * @text_content: the NULL of string...
 * Return: Returns: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, lengh = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (lengh = 0; text_content[lengh] != '\0'; lengh++)
			;
	}
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(op, text_content, lengh);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}

