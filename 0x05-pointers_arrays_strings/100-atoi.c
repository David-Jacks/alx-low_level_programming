#include <stdio.h>
#include "main.h"

/**
 * _atoi - string to integer
 * @s: string to be converted
 * Return: converted string to int
 */

int _atoi(char *s)
{

	int i = 0;
	int a = 0;
	int ans = 0;
	int cnt = 0;
	int j = 0;
	int num = 0;

	while (s[cnt] != '\0')
		cnt++;

	while (i < cnt && f == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (a % 2)
				num = -num;
			ans = ans * 10 + num;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}

	if (j == 0)
		return (0);

	return (ans);
}
