#include "main.h"
/**
*_memcpy - copies memory
*@dest: copy destination
*@src: copy source
*@n: copy parameter
*Return: return pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
return (dest);
}
