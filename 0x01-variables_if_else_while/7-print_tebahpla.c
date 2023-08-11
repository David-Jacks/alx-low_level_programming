#include <stdio.h>

/**
 *main - function
 *
 *Return: 0 meaning (success)
 */

int main(void)
{
	int start = (int)'a';
	int end;
	char ans;

	for (end = 'z'; end != start - 1; end--)
	{
		ans = end;
		putchar(ans);
	}
	putchar('\n');
	return (0);
}
