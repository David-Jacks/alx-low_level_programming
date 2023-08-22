#include <stdio.h>
#include "main.h"

/**
 * rev_string - print reversely
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;
	int start;
	int end;
	int count = 0;
	int j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	start = 0;
	end = count - 1;
	while (end > start)
	{
		tmp = s[end];
		s[end] = s[start];
		s[start] = tmp;
		end--;
		start++;
	}
}
