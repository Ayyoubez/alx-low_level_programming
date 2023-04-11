#include <stdlib.h>
#include "main.h"
/**
*str_concat - function to combine strings
*@s1: parameter
*@s2: parameter
*Return: new string
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0;
	int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	new = malloc(sizeof(char) * (i + c + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		new[i] = s2[c];
		c++;
		i++;
	}
	new[i] = '\0';
return (new);
}
