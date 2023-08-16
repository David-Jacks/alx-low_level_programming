#include <stdio.h>
#include "main.h"
/**
 * _abs - function to print absolute values
 * @n: a variable to contain the number to be checked
 * Return: return depends on input
 */

int _abs(int n)
{
	int ans = print_sign(n);

	if (ans == -1)
		ans = n * -1;
	else
		ans = n;
	return (ans);
}
