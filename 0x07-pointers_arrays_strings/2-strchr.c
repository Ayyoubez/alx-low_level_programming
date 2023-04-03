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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (&(s[i]));
		}
		i++;
	}
return (0);
}
