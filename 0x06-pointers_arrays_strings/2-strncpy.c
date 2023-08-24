#include <stdio.h>
#include "main.h"

/**
 *_strncpy - coppies strings
 *@src: string to be added
 *@dest: string to be added to
 *@n: number of src characters to be added
 *Return: returns a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
