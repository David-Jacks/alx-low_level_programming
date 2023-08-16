#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function to print absolute values
 * @n: a variable to contain the number to be checked
 * Return: return depends on input
 */

int print_last_digit(int n)
{
	int ans = print_sign(n);

	if (ans == -1)
		ans = (n % 10) * -1;
	else
		ans = n % 10;
	return (ans);
}
