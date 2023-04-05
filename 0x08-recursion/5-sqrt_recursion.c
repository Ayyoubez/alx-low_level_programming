#include "main.h"

int _A_sqrt(int n, int m);

/**
*_sqrt_recursion - Natural square
*@n: parameter
*Return: result
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_A_sqrt(n, 0));
}
/**
*_A_sqrt - actual square
*@n: parameter
*@m: parameter
*Return: result
*/
int _A_sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_A_sqrt(n, m + 1));
}
