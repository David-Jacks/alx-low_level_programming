#include <stdio.h>
#include "main.h"
/**
 * main - main fuction
 *
 * Return: return 0 as successs
 */
int main(void)
{
	char name[] = "_putchar";

	for (int i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
