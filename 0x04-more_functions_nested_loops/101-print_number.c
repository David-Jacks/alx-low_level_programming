#include <stdio.h>
#include "main.h"

/**
 *print_number - print numerals
 *@n: number to be printed
 */

void print_number(int n)
{
	unsigned int f;

	if (n < 0)
	{
		f = -n;
		_putchar('-');
	} else
	{
		f = n;
	}

	if (f / 10)
	{
		print_number(f / 10);
	}

	_putchar((f % 10) + '0');
}
