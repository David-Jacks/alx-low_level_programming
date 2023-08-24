#include <stdio.h>
#include "main.h"

/**
 *_strcmp - compares strings
 *@s1: string 1
 *@s2: string 2
 *Return: returns an integer value
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int i = 0;
	int cnt = 0;

	while (s1[j] != '\0')
	{
		j++;
	}

	while (s2[i] != '\0')
	{
		i++;
	}
	if (i == j)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			if (s1[i] == s2[i])
				cnt++;
			i++;
		}

		if (j == cnt)
			return (0);
	}
	else if (j < i)
		return (-1);
	else
		return (1);
	return (1);
}
