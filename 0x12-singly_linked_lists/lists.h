#ifndef MAIN_HEADER
#define MAIN_HEADER

/**
 * struct list_s - Singly linked list
 * @str: string
 * @strlen: string length
 * @next: pointer to resolve nodes ahead
 *
 * Description: singly linked list node structure for my alx project
 */

struct list_s
{
	char *str;
	unsigned int strlen;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
