#include <stdio.h>

/**
 *main - function
 *
 *Return: 0 meaning (success)
 */

int main(void)
{
	int s = 48;
	int e = 57;

	while (s != e + 1)
	{
		putchar((char)s);
		if (s == e && e != 102)
		{
			s = 96;
			e = 102;
		}
		s++;
	}
	putchar('\n');
	return (0);
}
