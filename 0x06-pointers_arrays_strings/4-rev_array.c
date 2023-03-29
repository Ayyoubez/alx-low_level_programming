#include "main.h"
/**
*reverse_array - reverse the elements of an array
*@a: array argument
*@n: number of element
*/
void reverse_array(int *a, int n)
{
	int s = 0;
	int i = 0;

	for (i = 0; i < n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - 1 -  i];
		a[n - 1 -  i] = s;
	}
}
