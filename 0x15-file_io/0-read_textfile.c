#include "main.h"
/**
 * read_textfile - function
 * @filename: name of file
 * @letters: nul of letters printed
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, str, letters);
	wr = write(STDOUT_FILENO, str, rd);
	if (op == -1 || rd == -1 || wr == -1)
	{
		free(str);
		return (0);
	}
	free(str);
	close(op);
	return (rd);
}
