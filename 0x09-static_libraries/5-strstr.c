#include "main.h"
/**
*_strstr - finds the first occurance
*@haystack: parameter
*@needle: parameter
*Return: result
*/
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *C = haystack;
		char *N = needle;

		while (*C == *N && *N != '\0')
		{
			C++;
			N++;
		}
		if (*N == '\0')
			return (haystack);
	}
return (0);
}
