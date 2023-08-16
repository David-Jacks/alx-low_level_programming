#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function to print absolute values
 * @n: a variable to contain the number to be checked
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= 10; i++)
	{
		printf("%d", n * i);
			if (i == 10)
				break;
		printf(", ");
		_putchar('\n');
	}
}
