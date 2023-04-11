#include <stdio.h>
/**
*main - start of the program
*@argc: number of arguments
*@argv: command line arguments
*Return: 0 as a result
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

return (0);
}
