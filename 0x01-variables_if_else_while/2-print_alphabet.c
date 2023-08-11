#include <stdio.h>

/**
 * main - function
 *
 * Description: program prints alphabets
 * Return: 0 meaning (success)
 */

int main(void)
{
	int start = 'a';
	int end = 'z';
	char ans;

	for (start; start != end + 1; start++)
	{
		ans = (char)start;
		putchar(ans);
	}
	putchar('\n');
	return (0);
}
