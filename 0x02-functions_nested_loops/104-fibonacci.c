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

	printf("%u, %u ", fibo1, fibo2);
	for (i = 2; i < 98; i++)
	{
		fibo_next = fibo1 + fibo2;
		if (i == 97)
		{
			printf("%u", fibo_next)
		}
		else
		{
			printf("%u, ", fibo_next);
		}
		fibo1 = fibo2;
		fibo2 = fibo_next;
	}
	printf("\n");
	return (0);
}
