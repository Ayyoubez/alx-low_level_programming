#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all - print all argument passed
*@format: parameter
*Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *x;
	char *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					x = va_arg(args, char *);
					if (!x)
						x = "(nil)";
					printf("%s%s", sep, x);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
