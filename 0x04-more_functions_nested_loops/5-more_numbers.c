#include <stdio.h>
#include "main.h"

/**
 *more_numbers - print numerals
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
}
