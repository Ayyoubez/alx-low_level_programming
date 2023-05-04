#include "main.h"
/**
*get_bit - value of a bit
*@n: parameter
*@index: parameter
*Return: result
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
return (i);
}
