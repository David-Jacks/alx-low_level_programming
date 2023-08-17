#include <stdio.h>
#include "main.h"

/**
 *print_triangle - print triangle shape
 *@size: number of times # is printed
 */

void print_triangle(int size)
{
	int i;
	int j;
	int check = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < check)
					_putchar(' ');
				else
					_putchar('#');
			}
			check--;
			_putchar('\n');
		}
	}
}
