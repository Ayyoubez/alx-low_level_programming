#include "main.h"
/**
*_strchr - fill a string with a char
*@s: string to fill
*@c: character to be used
*Return: result
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (&(s[i]));
	}
return (0);
}
