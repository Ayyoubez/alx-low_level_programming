#include "main.h"
/**
*_strspn - string position
*@s: parameter
*@accept: parameter
*Return: result
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == s[i])
		return (i + 1);
	}
return (0);
}
