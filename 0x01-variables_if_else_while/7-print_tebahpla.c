#include <stdio.h>

/**
 *main function 
 *
 * return 0 meaning (success)
 */

int main(void)
{
	int start = (int)'a';
	int end = (int)'z';
	char ans;

	for (end; end != start - 1; end--)
	{
		ans = end;
		putchar(ans);
	}
	putchar('\n');
	return (0);	
}
