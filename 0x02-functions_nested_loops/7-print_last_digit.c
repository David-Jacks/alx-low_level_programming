#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function to print absolute values
 * @n: a variable to contain the number to be checked
 * Return: return depends on input
 */

int print_last_digit(int n)
{
	int ans = n % 10;

	if (ans < 0)
	{
		_putchar(-ans + '0');
		return (-ans);
	}
	else
	{
		_putchar(ans + '0');
		return (ans);
	}
}
