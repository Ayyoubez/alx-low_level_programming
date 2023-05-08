#include "main.h"
/**
*read_textfile - reading text from a file
*@filename: parameter
*@letters: parameter
*Return: result
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t r;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
