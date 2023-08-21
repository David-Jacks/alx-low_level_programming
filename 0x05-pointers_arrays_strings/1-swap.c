#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int *tmp = a;

	a = b;
	b = tmp;
}
