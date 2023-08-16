#include <stdio.h>
#include "main.h"
/**
 * print_sign - function to print sign
 * @n: a variable to contain the number to be checked
 * Return: return depends on input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
