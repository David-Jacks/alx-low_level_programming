#include <stdio.h>
#include "main.h"

/**
 *_strncat - adds strings together
 *@src: string to be added
 *@dest: string to be added to
 *@n: number of src characters to be added
 *Return: returns a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
