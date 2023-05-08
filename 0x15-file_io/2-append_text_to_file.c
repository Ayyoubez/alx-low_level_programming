#include "main.h"
/**
*append_text_to_file - append a text to a file
*@filename: parameter
*@text_content: parameter
*Return: result
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;
	int w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, i);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
return (1);
}
