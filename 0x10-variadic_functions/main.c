#include <stdio.h>
#include "variadic_functions.h"
int main(void)
{
	int ans = sum_them_all(2, 98, 1024);
	printf("%d\n", ans);
	return (0);
}
