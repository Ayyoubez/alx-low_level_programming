#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - a;;pcate memory for  two strings
*@s1: string destination
*@s2: string source
*@n: parameter of number of bits
*Return: result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		p = malloc(sizeof(char) * (i + j + 1));
	p = malloc(sizeof(char) * (i + n + 1));
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
return (p);
}
