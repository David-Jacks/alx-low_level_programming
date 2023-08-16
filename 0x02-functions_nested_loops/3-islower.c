#include <stdio.h>

/**
 * _islower - returns if an alphabet is lowercase
 *@c: argument to be checked
 * Return: return 1 as successs
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
