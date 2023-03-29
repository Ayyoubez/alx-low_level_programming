#include "main.h"

/**
*_strncat - concanete part of a string
*@dest: pointer
*@src: pointer
*@n: parameter
*Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		j++;
		i++;
	}
	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
	}
return (dest);
}
