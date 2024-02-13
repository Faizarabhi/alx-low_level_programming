#include "main.h"
/**
 * append_text_to_file - function that append text on file
 * @filename: the name of file
 * @text_content: the str wich append to the file
 * Return: 1 if succes and -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, lengh = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (lengh = 0; text_content[lengh] != '\0'; lengh++)
			;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content)
	{
		wr = write(op, text_content, lengh);
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}
