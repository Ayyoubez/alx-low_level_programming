#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*verif - function tocheck the number
*@str: parameter
*Return: result
*/
int verif(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
			return (0);
		c++;
	}
	return (1);
}
/**
*main - start of the program
*@argc: number of arguments
*@argv: command line arguments
*Return: result
*/
int main(int argc, char *argv[])
{
	int c;
	int si;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (verif(argv[c]))
		{
			si = atoi(argv[c]);
			sum += si;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
