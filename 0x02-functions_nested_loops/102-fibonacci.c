#include <stdio.h>
#include "main.h"
/**
 * main - function to print absolute values
 *
 * Return: returns 0 for end of program
 */

int main(void)
{
	int i;
	int j;
	unsigned long fibo[50];

	fibo[0] = 1;
	fibo[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (j = 0; j < 50; j++)
	{
		printf("%lu", fibo[j]);
		if (j == 49)
			break;
		printf(", ");
	}
	putchar('\n');
	return (0);
}
