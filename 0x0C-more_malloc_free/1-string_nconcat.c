#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - allocate memory for  two strings
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
	unsigned int c = 0;
	unsigned int l = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		p = malloc(sizeof(char) * (i + j + 1));
	else
		p = malloc(sizeof(char) * (i + n + 1));
	if (!p)
		return (NULL);
	while (c < i)
	{
		p[c] = s1[c];
		c++;
	}
	while (n >= j && c < (i + j))
	{
		p[c++] = s2[l++];
	}
	while (n < j && c < (i + n))
	{
		p[c++] = s2[l++];
	}
	p[c] = '\0';
return (p);
}
