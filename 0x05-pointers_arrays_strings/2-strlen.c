#include "main.h"
/**
 * _strlen - length of a string
 * @s: parameters of the function
 *Return: length
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
