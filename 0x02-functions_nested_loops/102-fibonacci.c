#include <stdio.h>
#include "main.h"
/**
 * main - function to print absolute values
 *
 * Return: returns 0 for end of program
 */

int main(void)
{
	int fibo[50];

	fibo[0] = 1;
	fibo[1] = 2;

	for (i = 2; i <= 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	for (j = 0; j <= 50; j++)
	{
		printf("%lu", f[j]);
		if (j == 50)
			break;
		printf(", ");
	}
	putchar('\n');
	return (0);
}
