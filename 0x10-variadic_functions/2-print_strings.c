#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *print_strings- prints a string followed by a new line
  *@separator: string to be printed between numbers
  *@n: number of integers to be passed
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char * arg = va_arg(args, char *);

		if (arg == NULL)
			printf("%p", (void *)arg);
		else printf("%s", arg);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');

}
