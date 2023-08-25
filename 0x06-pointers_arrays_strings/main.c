#include <stdio.h>
#include "main.h"

/**
 *main- execute code
 *
 *Return: 0 for success
 */
int main(void)
{
	int dest[] = {1, 2, 3, 4, 5};
	char src[] = "hello@!";

	printf("%s\n", string_toupper(src));
	return (0);
}
