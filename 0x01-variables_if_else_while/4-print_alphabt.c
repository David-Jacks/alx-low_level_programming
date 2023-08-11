#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 meaning (success)
 */

int main(void)
{
	int i;
	int end = 'z';
	char ans;

	for (i = 97; i != end + 1; i++)
	{
		ans = i;
		if (ans == 'q' || ans == 'e')
		{
			i += 1;
			ans = i;
		}
		putchar(ans);
	}
	putchar('\n');
	return (0);
}
