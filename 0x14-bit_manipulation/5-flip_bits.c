#include "main.h"

/**
 * flip_bits - count the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, total = 0;
	unsigned long int recent;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		recent = exclusive >> i;
		if (recent & 1)
			total++;
	}

	return (total);
}

