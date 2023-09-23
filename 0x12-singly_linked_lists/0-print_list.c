#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

=======
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
			printf("", h->len, h->str);
		} else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		results++;
	}
	return (results);
}
>>>>>>> 01afb515f2c4cad8960efbbc78050bc472bed639
