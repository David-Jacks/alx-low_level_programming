#include <stdio.h>
#include "main.h"

/**
 *print_number - print numerals
 *@n: number to be printed
 */

void print_number(int n)
{
	int i;
	int j = 0;
	int z = 1;
	int f = n;
	int neg = 0;

	if (n < 0)
	{
		f = -f;
		neg = 1;
	}
	while (n != 0)
	{
		z = z * 10;
		n = n / 10;
		j++;
	}
	if (neg)
		_putchar('-');
	for (i = 0; i <= j; i++)
	{
		if (z >= 10)
		{
			z = z / 10;
			_putchar((f / z) + '0');
		}
		f = f % z;
	}
	_putchar('\n');
}
