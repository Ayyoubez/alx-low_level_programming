#include "main.h"
/**
*_strpbrk - search a string
*@s: parameter
*@accept: parameter
*Return: result
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
