#include "main.h"
/**
*_memset - function to fills the memory
*@s: parameter
*@b: parameter
*@n: parameter
*Return: pointer result
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
return (s);
}
