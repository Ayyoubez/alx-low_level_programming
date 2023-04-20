#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers - print function numbers
*@separator: parameter
*@n: parameter
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x = 0;

	va_start(args, n);
	for (i = 0; i < n * 2; i += 2)
	{
		x = va_arg(args, int);
		printf("%d", x);
		printf("%c", *separator);
	}
	va_end(args);
	printf("\n");
}