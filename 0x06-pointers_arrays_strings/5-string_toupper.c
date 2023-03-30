#include "main.h"
/**
*string_toupper - string to upper
*@str: parameter
*Return: result upper
*/
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
return (str);
}
