#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 meaning (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			putchar((char)i);
			putchar((char)j);
			if (i == 57 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
