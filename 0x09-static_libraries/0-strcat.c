#include "main.h"
/**
 * _strcat - function to concatenate 2 strings
 *@dest: pointer
 *@src: pointer
 *Return: value of first pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int leng = 0;

	while (dest[i] != '\0')
	{
		leng++;
		i++;
	}
	for (i = 0; i <= leng; i++)
	{
		dest[leng + i] = src[i];
	}
return (dest);
}
