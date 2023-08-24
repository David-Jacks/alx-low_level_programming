#include <stdio.h>
#include "main.h"

/**
 *_strcat - adds strings together
 *@src: string to be added
 *@dest: string to be added to
 *Return: returns a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src) != '\0')
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}
	*(dest + i) = '\0';

	return (dest);
}
