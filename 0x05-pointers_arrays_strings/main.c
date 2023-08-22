#include <stdio.h>
#include "main.h"

/**
 *main- execute code
 *
 *Return: 0 for success
 */
int main(void)
{
	char dest[] = "";
	char src[] = "hello";

	printf("%s\n", _strcpy(dest, src));
	return (0);
}
