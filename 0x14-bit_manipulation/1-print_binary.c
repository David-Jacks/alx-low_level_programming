#include "main.h"

/**
 * print_binary - output the binary of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, Total = 0;
	unsigned long int recen;

	for (i = 63; i >= 0; i--)
	{
		recen = n >> i;

		if (recen & 1)
		{
			_putchar('1');
			Total++;
		}
		else if (Total)
			_putchar('0');
	}
	if (!Total)
		_putchar('0');
}

