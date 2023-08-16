#include <stdio.h>
#include "main.h"
/**
 * main - function to print absolute values
 * @n: a variable to contain the number to be checked
 * Return: returns 0 for end of program
 */

int main(void)
{
	int sum;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	putchar('\n');
	return (0);
}
