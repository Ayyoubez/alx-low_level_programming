#include "main.h"
/**
 * _strlen - function to print the length
 * @s: parameter
 * Return: return length
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
