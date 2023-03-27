#include "main.h"
/**
 * swap_int - swapping values
 * @a: parameters
 * @b: parameters
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
