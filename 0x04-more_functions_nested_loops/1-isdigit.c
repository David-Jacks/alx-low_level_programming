#include <stdio.h>
#include "main.h"

/**
 *_isdigit - checks for a digit
 *@c: the parameter to be tested
 *Return: 1 when ture and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
