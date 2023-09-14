#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - returns sum of all it parameters
  *@n: number of integers to be passed
  *Return: sum of it parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		sum += arg;
	}
	return (sum);
}

