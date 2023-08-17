#include <stdio.h>
#include "main.h"

/**
 *_isupper - checks for an uppercase character
 *@c: the parameter to be tested
 *Return: 1 when ture and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
