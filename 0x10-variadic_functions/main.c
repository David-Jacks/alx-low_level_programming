#include <stdio.h>
#include "variadic_functions.h"
int main(void)
{
	/*int ans = sum_them_all(2, 98, 1024);
	printf("%d\n", ans);*/

	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
