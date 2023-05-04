#include "main.h"
/**
*get_endianness - check machine status
*Return: result
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *m = (char *) &i;

return (*m);
}
