#include <stdio.h>
#include "main.h"
/**
 * _abs - function to print absolute values
 * @n: a variable to contain the number to be checked
 * Return: return depends on input
 */

int _abs(int n)
{
	int ans;

	if (n & (1 << (sizeof(int) * 8 - 1)))
		ans = n * -1;
	else
		ans = n;
	return (ans);
}
