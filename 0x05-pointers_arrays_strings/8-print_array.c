#include <stdio.h>
#include "main.h"

/**
 * print_array - print array values
 * @a: pointer to array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
	{
		printf("%c", '\n');
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
