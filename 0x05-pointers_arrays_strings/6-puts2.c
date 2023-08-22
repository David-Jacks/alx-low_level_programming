#include <stdio.h>
#include "main.h"

/**
 * puts2 - print half string
 * @str: string half to be printed
 */

void puts2(char *str)
{
	int i;
	int j;
	int n;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = count - 1;
	for (j = 0; j <= n; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
