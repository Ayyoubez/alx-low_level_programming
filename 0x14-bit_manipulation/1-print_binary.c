#include "main.h"
/**
*print_binary - print the binary value
*@n: parameter
*Return: nothing as void
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		tmp = n >> i;
		if (tmp & 1)
		{
			_putchar('1');
			tmp++;
		}
		else if (tmp)
			_putchar('0');
	}
	if (!tmp)
		_putchar('0');
}
