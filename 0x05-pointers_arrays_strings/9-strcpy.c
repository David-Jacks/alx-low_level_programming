#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: destination
 * @src: the string to be copied
 * Return: returns destination string
 */

char *_strcpy(char *dest, char *src)
{

	dest = src;
	*dest = *src;
	return (dest);
}
