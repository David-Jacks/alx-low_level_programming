#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half string
 * @str: string half to be printed
 */

void puts_half(char *str)
{
	int i;
	int j;
	int n;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = count / 2;
	for (j = n; j < count; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
