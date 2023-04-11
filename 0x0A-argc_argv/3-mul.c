#include <stdio.h>
#include <stdlib.h>
/**
*main - start of the program
*@argc: number of arguments
*@argv: command line arguments
*Return: 0 as a result
*/
int main(int argc, char *argv[])
{
	int r = 0;
	int n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	r = n1 * n2;
	printf("%d\n", r);
return (0);
}
