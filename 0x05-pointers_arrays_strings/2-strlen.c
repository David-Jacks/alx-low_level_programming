#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: string to be checked
 * Return: count of char in s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		*s++;
		count++;
	}
	return (count);
}
