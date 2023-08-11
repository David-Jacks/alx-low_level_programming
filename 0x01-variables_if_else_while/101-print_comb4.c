#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 meaning (success)
 */

int main(void)
{
	int k;
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar((char)i);
				putchar((char)j);
				putchar((char)k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
