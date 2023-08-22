#include <stdio.h>
#include "main.h"

/**
 * print_rev - print reversely
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;
	int count = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
