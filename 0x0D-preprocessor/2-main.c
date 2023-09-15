#include <stdio.h>

/**
 * main - a program that prints the name of  the name of the program
 *
 * Return: - always 0 (sucess).
 */
int main(void)
{
	printf("%s\xA", __FILE__);
	return (0);

}
