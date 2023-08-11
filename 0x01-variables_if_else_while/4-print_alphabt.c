#include <stdio.h>

/**
 *main function 
 *
 * return 0 meaning (success)
 */

int main(void)
{
	int start = 'a';
	int end = 'z';
	char ans;

	for (start; start != end + 1; start++)
	{
		ans = start;
		if (ans == 'q' || ans == 'e')
		{
			start += 1;
			ans = start;
		}
		putchar(ans);
	}
	putchar('\n');
	return (0);	
}
