#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: will be 1 (Success)
 */
int main(void)
{
	int i;
	char my_ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (i = 0; my_ch[i] != '\0'; i++)
		putchar(my_ch[i]);
	putchar('\n');
	return (1);
}
