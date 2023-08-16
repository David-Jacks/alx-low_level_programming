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
	unsigned int fibo1 = 1;
	unsigned int fibo2 = 2;
	unsigned int fibo_next;
	int sum = fibo2;

	printf("%u, %u ", fibo1, fibo2);
	for (i = 2; fibo_next < 4000000; i++)
	{
		fibo_next = fibo1 + fibo2;
		if (fibo_next % 2 == 0)
		{
			sum += fibo_next;
		}
		
		fibo1 = fibo2;
		fibo2 = fibo_next;
	}
	printf("%d\n", sum);
	return (0);
}
