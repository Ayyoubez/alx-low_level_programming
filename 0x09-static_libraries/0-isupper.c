#include "main.h"

/**
 *_isupper - check if is upper
*@c:parameter
 *Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
