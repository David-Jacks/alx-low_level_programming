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

	int i;
	int cnt = 0;

	while (*(src + cnt) != '\0')
	{
		cnt++;
	}
	for (i = 0; i < cnt; i++)
	{
		dest[i] = src[i];
	}
	dest[cnt] = '\0';
	return (dest);
}
