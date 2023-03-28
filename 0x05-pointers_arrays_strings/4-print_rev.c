#include "main.h"
/**
 * print_rev - print in reverse
 * @s: pointer parameter
 * return: 0
 */
void print_rev(char *s)
{
	int leng = 0;
	int i;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (i = leng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

