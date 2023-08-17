#include <stdio.h>
#include "main.h"

/**
 *main - start code execution
 *Return: always 0 for succes
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i != 100)
				_putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i != 100)
				_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				_putchar(' ');
		}
		else
		{
			printf("%d", i);
			if (i != 100)
				_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
