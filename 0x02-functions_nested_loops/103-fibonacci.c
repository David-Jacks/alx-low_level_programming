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
	int sum;
	unsigned long long fibo[];

	fibo[0] = 1;
	fibo[1] = 2;

	for (i = 2; fibo[i] < 4000000; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if (fibo[i] % 2 == 0)
			sum += fibo[i]
	}
	printf("%d\n", sum);
	return (0);
}
