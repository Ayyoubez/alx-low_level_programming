#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sum of number of arguments
*@n: parameter
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
return (sum);
}
