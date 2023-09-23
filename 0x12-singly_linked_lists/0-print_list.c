#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints element of a linked list
 *@h: pointer to first element in the linked list
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t results = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->strlen, h->str);
		} else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		results++;
	}
	return (results);
}
