#include "main.h"
/**
 * puts2 - function should print only one character
 * @str: pointer parameter
 * Return result
 */
void puts2(char *str)
{
	int leng = 0;
	int j = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		leng++;
	}
	j = leng - 1;
	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

