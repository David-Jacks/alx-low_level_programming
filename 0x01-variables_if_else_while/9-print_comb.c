#include <stdio.h>

/**
 *main - function
 *
 *Return: 0 meaning (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar((char)i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
