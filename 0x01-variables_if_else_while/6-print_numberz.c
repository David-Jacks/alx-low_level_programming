#include <stdio.h>

/**
 *main function 
 *
 * return 0 meaning (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar((char)i);
	putchar('\n');
	return (0);	
}
