#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - print triangle shape
 *@n: number of times # is printed
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int check = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j == 1 + check)
					_putchar('#');
				else
					_putchar(' ');
			}
			check++;
			_putchar('\n');
		}
	}
}
