#include "main.h"
/**
*_strlen_recursion - length of a string
*@s: parameter
*Return: result
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
return (len);
}
