#include "main.h"
/**
*is_prime_number - check the number if is prime
*@n: parameter to pass
*@m: parameter
*Return: result
*/

int _prime(int n, int m);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
*_prime - function for actual prime
*@n: parameter
*@m: parameter
*Return: result
*/

int _prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (_prime(n, m - 1));
}
