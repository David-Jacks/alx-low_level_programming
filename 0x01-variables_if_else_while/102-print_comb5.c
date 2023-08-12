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
	int m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (m = j + 1; m < 58; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i ==57 && j == 56 && k == 57 && m == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
