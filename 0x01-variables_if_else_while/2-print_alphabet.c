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

	for (start; start != end + 1; start++)
	{
		ans = (char)start;
		putchar(ans);
	}
	putchar('\n');
	return (0);	
}
