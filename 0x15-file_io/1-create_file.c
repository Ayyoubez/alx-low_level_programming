#include "main.h"
/**
*create_file - creating a file
*@filename: parameter
*@text_content: parameter
*Return: result
*/
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, i);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
return (1);
}
