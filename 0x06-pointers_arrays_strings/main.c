#include <stdio.h>
#include "main.h"

/**
 *main- execute code
 *
 *Return: 0 for success
 */
int main(void)
{
	int i;
	int dest[] = {1, 2, 3, 4, 5};
	char src[] = "hello";

	reverse_array(dest, 5);
	for (i = 0; i < 5; i++)
		printf("%d\n", dest[i]);
	return (0);
}
