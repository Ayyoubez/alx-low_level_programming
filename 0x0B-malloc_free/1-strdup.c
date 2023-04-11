#include <stdlib.h>
#include "main.h"
/**
*_strdup - function to duplicate a string
*@str: parameter
*Return: new string
*/
char *_strdup(char *str)
{
	char *new;
	unsigned int i;
	int r = 1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		r++;
	new = malloc(sizeof(char) * r);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
return (new);
}
