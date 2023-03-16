#include <unstd.h>
#include <stdio.h>
/**
 * main - -main function
 * Return: 1(success)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar,
	      2015-10-19\n";

	const size_t length = sizeof(message) - 1;

	ssize_t bytes_written = write(STDERR_FILENO, message, length);

	if (bytes_written != length)
	return (1);
return (1);
}
