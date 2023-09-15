#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - returns sum of all it parameters
  *@n: number of integers to be passed
  *@... : a variable number of parameters to be included
  *Return: sum of it parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
