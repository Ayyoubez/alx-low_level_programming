#include "main.h"
/**
*binary_to_uint - convert binary to int
*@b: parameter
*Return: result
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int i = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			unit = unit << 1;
		else if (b[i] == '1')
			unit = (unit << 1) | 1;
		else
			return (0);
	}
return (unit);
}
