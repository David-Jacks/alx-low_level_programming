#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function to check for a letter
 * @c: specifies the character to be checked
 * Return: return 0 as successs
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && >= 'A'))
		return (1);
	return (0);
}
