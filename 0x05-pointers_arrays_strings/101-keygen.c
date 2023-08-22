#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - ececution start
 *
 * Return: 0 for success in execution
 */

int main(void)
{
	int key[100];
	int i, sum, n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		key[i] = rand() % 78;
		sum += (key[i] + '0');
		putchar(key[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
