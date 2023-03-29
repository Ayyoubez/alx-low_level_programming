#include "main.h"
/**
*_strncpy - copies a string
*@dest: destination
*@src: source string
*@n: argument
*Return: result of new string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
return (dest);
}
