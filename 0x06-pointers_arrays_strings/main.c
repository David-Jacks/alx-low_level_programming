#include <stdio.h>
#include "main.h"

/**
 *main- execute code
 *
 *Return: 0 for success
 */
int main(void)
{
	char dest[] = "hime ";
	char src[] = "hello";

	printf("%s\n", _strncpy(dest, src, 4));
	return (0);
}
