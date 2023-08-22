#include <stdio.h>
#include "main.h"

/**
 * _puts - swaps values
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
