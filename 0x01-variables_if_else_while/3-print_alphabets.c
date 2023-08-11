#include <stdio.h>
/**
 *@s = small case start
 *@e = small case end
 *@S = Upper case start
 *@E = Upper case end
 */

/**
 *main function 
 *
 * return 0 meaning (success)
 */

int main(void)
{	
	int s = 'a';
	int e = 'z';
	int S = 'A';
	int E = 'Z';

	while (s != e + 1)
	{
		putchar((char)s);
		if (s == e && e != E)
		{
			s = S - 1;
			e = E;
		}
		s++;
	}
	putchar('\n');
	return (0);	
}
