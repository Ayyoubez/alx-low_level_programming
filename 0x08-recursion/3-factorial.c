#include "main.h"
/**
*factorial - calculate the factorial
*@n: parameter
*Return : result
*/

int factorial(int n)
{
	int s = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
	s = (n * factorial(n - 1));
	}
return (s);
}
