#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function to print absolute values
 * @n: a variable to contain the number to be checked
 */

void print_to_98(int n)
{
	int i;
	int j;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j == 98)
				break;
			printf(", ");
		}
		_putchar('\n');
	}

}
