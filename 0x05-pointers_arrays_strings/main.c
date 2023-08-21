#include <stdio.h>
#include "main.h"

/**
 *main- execute code
 *
 *Return: 0 for success
 */
int main(void)
{
	int a = 2;
	int b = 4;

	swap_int(a, b);
	printf("%d, %d\n", a, b);
	return (0);
}
