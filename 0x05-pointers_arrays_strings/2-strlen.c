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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
