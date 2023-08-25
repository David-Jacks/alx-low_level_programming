#include <stdio.h>
#include "main.h"

/**
 *string_toupper - converts strings to upper_case
 *@s: a character arrays address
 *
 *Return: returns a pointer to a character array
 */

char *string_toupper(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (s[j] > 'a' && s[j] < 'z')
			s[j] = (s[j] - 32);
	}
	return (s);
}
