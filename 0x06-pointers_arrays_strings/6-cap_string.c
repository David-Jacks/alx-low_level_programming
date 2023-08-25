#include <stdio.h>
#include "main.h"

/**
 *cap_string - capitalizes strings
 *@s: a character arrays address
 *
 *Return: returns a pointer to a character array
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;

	if (s[0] > 'a' && s[0] < 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 1; j < i; j++)
	{
		if (s[j - 1] == ' ' && s[j] > 'a' && s[j] < 'z')
			s[j] = (s[j] - 32);
	}
	return (s);
}
