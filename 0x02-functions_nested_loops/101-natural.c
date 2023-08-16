#include <stdio.h>
#include "main.h"
/**
 * main - function to print absolute values
 *
 * Return: returns 0 for end of program
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
