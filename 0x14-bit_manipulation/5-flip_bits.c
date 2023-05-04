#include "main.h"
/**
*flip_bits - change bits
*@n: parameter
*@m: parameter
*Return: result
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var1;
	unsigned long int var2;
	int i, c = 0;

	var2 = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		var1 = var2 >> i;
		if (var1 & 1)
			c++;
	}
	return (c);
}
